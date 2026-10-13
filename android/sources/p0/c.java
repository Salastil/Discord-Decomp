package p0;

import a5.a0;
import androidx.constraintlayout.core.Metrics;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import java.util.ArrayList;
import java.util.Arrays;
import k2.r;

/* loaded from: classes.dex */
public final class c {

    /* renamed from: p, reason: collision with root package name */
    public static boolean f16272p = false;

    /* renamed from: q, reason: collision with root package name */
    public static int f16273q = 1000;

    /* renamed from: r, reason: collision with root package name */
    public static Metrics f16274r;

    /* renamed from: c, reason: collision with root package name */
    public final d f16276c;

    /* renamed from: f, reason: collision with root package name */
    public b[] f16279f;

    /* renamed from: l, reason: collision with root package name */
    public final r f16283l;

    /* renamed from: o, reason: collision with root package name */
    public b f16286o;
    public boolean a = false;

    /* renamed from: b, reason: collision with root package name */
    public int f16275b = 0;

    /* renamed from: d, reason: collision with root package name */
    public int f16277d = 32;

    /* renamed from: e, reason: collision with root package name */
    public int f16278e = 32;

    /* renamed from: g, reason: collision with root package name */
    public boolean f16280g = false;

    /* renamed from: h, reason: collision with root package name */
    public boolean[] f16281h = new boolean[32];

    /* renamed from: i, reason: collision with root package name */
    public int f16282i = 1;
    public int j = 0;
    public int k = 32;

    /* renamed from: m, reason: collision with root package name */
    public e[] f16284m = new e[f16273q];

    /* renamed from: n, reason: collision with root package name */
    public int f16285n = 0;

    public c() {
        this.f16279f = null;
        this.f16279f = new b[32];
        s();
        r rVar = new r(10, false);
        rVar.f13142e = new a0((char) 0, 13);
        rVar.f13143i = new a0((char) 0, 13);
        rVar.f13144v = new e[32];
        this.f16283l = rVar;
        d dVar = new d(rVar);
        dVar.f16287f = new e[IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT];
        dVar.f16288g = new e[IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT];
        dVar.f16289h = 0;
        dVar.f16290i = new e4.r(dVar);
        this.f16276c = dVar;
        this.f16286o = new b(rVar);
    }

    public static int n(Object obj) {
        e eVar = ((r0.c) obj).f17084i;
        if (eVar != null) {
            return (int) (eVar.f16295w + 0.5f);
        }
        return 0;
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r3v1, types: [java.lang.Object[]] */
    /* JADX WARN: Type inference failed for: r4v0 */
    public final e a(int i5) {
        a0 a0Var = (a0) this.f16283l.f13143i;
        int i6 = a0Var.f124e;
        e eVar = null;
        if (i6 > 0) {
            int i10 = i6 - 1;
            ?? r32 = (Object[]) a0Var.f125i;
            ?? r42 = r32[i10];
            r32[i10] = 0;
            a0Var.f124e = i10;
            eVar = r42;
        }
        e eVar2 = eVar;
        if (eVar2 == null) {
            eVar2 = new e(i5);
            eVar2.I = i5;
        } else {
            eVar2.c();
            eVar2.I = i5;
        }
        int i11 = this.f16285n;
        int i12 = f16273q;
        if (i11 >= i12) {
            int i13 = i12 * 2;
            f16273q = i13;
            this.f16284m = (e[]) Arrays.copyOf(this.f16284m, i13);
        }
        e[] eVarArr = this.f16284m;
        int i14 = this.f16285n;
        this.f16285n = i14 + 1;
        eVarArr[i14] = eVar2;
        return eVar2;
    }

    public final void b(e eVar, e eVar2, int i5, float f2, e eVar3, e eVar4, int i6, int i10) {
        b l6 = l();
        if (eVar2 == eVar3) {
            l6.f16270d.g(eVar, 1.0f);
            l6.f16270d.g(eVar4, 1.0f);
            l6.f16270d.g(eVar2, -2.0f);
        } else if (f2 == 0.5f) {
            l6.f16270d.g(eVar, 1.0f);
            l6.f16270d.g(eVar2, -1.0f);
            l6.f16270d.g(eVar3, -1.0f);
            l6.f16270d.g(eVar4, 1.0f);
            if (i5 > 0 || i6 > 0) {
                l6.f16268b = (-i5) + i6;
            }
        } else if (f2 <= 0.0f) {
            l6.f16270d.g(eVar, -1.0f);
            l6.f16270d.g(eVar2, 1.0f);
            l6.f16268b = i5;
        } else if (f2 >= 1.0f) {
            l6.f16270d.g(eVar4, -1.0f);
            l6.f16270d.g(eVar3, 1.0f);
            l6.f16268b = -i6;
        } else {
            float f10 = 1.0f - f2;
            l6.f16270d.g(eVar, f10 * 1.0f);
            l6.f16270d.g(eVar2, f10 * (-1.0f));
            l6.f16270d.g(eVar3, (-1.0f) * f2);
            l6.f16270d.g(eVar4, 1.0f * f2);
            if (i5 > 0 || i6 > 0) {
                l6.f16268b = (i6 * f2) + ((-i5) * f10);
            }
        }
        if (i10 != 8) {
            l6.a(this, i10);
        }
        c(l6);
    }

    /* JADX WARN: Code restructure failed: missing block: B:65:0x00d7, code lost:
    
        if (r4.H <= 1) goto L68;
     */
    /* JADX WARN: Code restructure failed: missing block: B:66:0x00da, code lost:
    
        r12 = false;
     */
    /* JADX WARN: Code restructure failed: missing block: B:74:0x00e4, code lost:
    
        if (r4.H <= 1) goto L68;
     */
    /* JADX WARN: Code restructure failed: missing block: B:85:0x00f9, code lost:
    
        if (r4.H <= 1) goto L86;
     */
    /* JADX WARN: Code restructure failed: missing block: B:86:0x00fc, code lost:
    
        r14 = false;
     */
    /* JADX WARN: Code restructure failed: missing block: B:93:0x0106, code lost:
    
        if (r4.H <= 1) goto L86;
     */
    /* JADX WARN: Removed duplicated region for block: B:135:0x01b7  */
    /* JADX WARN: Removed duplicated region for block: B:145:? A[RETURN, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void c(b bVar) {
        boolean z5;
        boolean z6;
        e eVar;
        e f2;
        if (this.j + 1 >= this.k || this.f16282i + 1 >= this.f16278e) {
            o();
        }
        if (bVar.f16271e) {
            z5 = false;
        } else {
            ArrayList arrayList = bVar.f16269c;
            if (this.f16279f.length != 0) {
                boolean z7 = false;
                while (!z7) {
                    int d6 = bVar.f16270d.d();
                    for (int i5 = 0; i5 < d6; i5++) {
                        e e9 = bVar.f16270d.e(i5);
                        if (e9.f16293i != -1 || e9.f16296x) {
                            arrayList.add(e9);
                        }
                    }
                    int size = arrayList.size();
                    if (size > 0) {
                        for (int i6 = 0; i6 < size; i6++) {
                            e eVar2 = (e) arrayList.get(i6);
                            if (eVar2.f16296x) {
                                bVar.h(this, eVar2, true);
                            } else {
                                bVar.i(this, this.f16279f[eVar2.f16293i], true);
                            }
                        }
                        arrayList.clear();
                    } else {
                        z7 = true;
                    }
                }
                if (bVar.a != null && bVar.f16270d.d() == 0) {
                    bVar.f16271e = true;
                    this.a = true;
                }
            }
            if (bVar.e()) {
                return;
            }
            float f10 = bVar.f16268b;
            float f11 = 0.0f;
            if (f10 < 0.0f) {
                bVar.f16268b = f10 * (-1.0f);
                a aVar = bVar.f16270d;
                int i10 = aVar.f16262d;
                for (int i11 = 0; i10 != -1 && i11 < aVar.f16260b; i11++) {
                    float[] fArr = (float[]) aVar.k;
                    fArr[i10] = fArr[i10] * (-1.0f);
                    i10 = ((int[]) aVar.j)[i10];
                }
            }
            int d7 = bVar.f16270d.d();
            float f12 = 0.0f;
            float f13 = 0.0f;
            e eVar3 = null;
            e eVar4 = null;
            int i12 = 0;
            boolean z8 = false;
            boolean z10 = false;
            while (i12 < d7) {
                float f14 = bVar.f16270d.f(i12);
                e e10 = bVar.f16270d.e(i12);
                float f15 = f11;
                if (e10.I == 1) {
                    if (eVar3 != null) {
                        if (f12 <= f14) {
                            if (!z8) {
                                if (e10.H > 1) {
                                }
                            }
                        }
                        z8 = true;
                    }
                    eVar3 = e10;
                    f12 = f14;
                } else if (eVar3 == null && f14 < f15) {
                    if (eVar4 != null) {
                        if (f13 <= f14) {
                            if (!z10) {
                                if (e10.H > 1) {
                                }
                            }
                        }
                        z10 = true;
                    }
                    eVar4 = e10;
                    f13 = f14;
                }
                i12++;
                f11 = f15;
            }
            float f16 = f11;
            if (eVar3 == null) {
                eVar3 = eVar4;
            }
            if (eVar3 == null) {
                z6 = true;
            } else {
                bVar.g(eVar3);
                z6 = false;
            }
            if (bVar.f16270d.d() == 0) {
                bVar.f16271e = true;
            }
            if (z6) {
                if (this.f16282i + 1 >= this.f16278e) {
                    o();
                }
                e a = a(3);
                int i13 = this.f16275b + 1;
                this.f16275b = i13;
                this.f16282i++;
                a.f16292e = i13;
                r rVar = this.f16283l;
                ((e[]) rVar.f13144v)[i13] = a;
                bVar.a = a;
                int i14 = this.j;
                h(bVar);
                if (this.j == i14 + 1) {
                    b bVar2 = this.f16286o;
                    bVar2.a = null;
                    bVar2.f16270d.b();
                    for (int i15 = 0; i15 < bVar.f16270d.d(); i15++) {
                        bVar2.f16270d.a(bVar.f16270d.e(i15), bVar.f16270d.f(i15), true);
                    }
                    r(this.f16286o);
                    if (a.f16293i == -1) {
                        if (bVar.a == a && (f2 = bVar.f(null, a)) != null) {
                            bVar.g(f2);
                        }
                        if (!bVar.f16271e) {
                            bVar.a.e(this, bVar);
                        }
                        ((a0) rVar.f13142e).C(bVar);
                        this.j--;
                    }
                    z5 = true;
                    eVar = bVar.a;
                    if (eVar != null) {
                        return;
                    }
                    if (eVar.I != 1 && bVar.f16268b < f16) {
                        return;
                    }
                }
            }
            z5 = false;
            eVar = bVar.a;
            if (eVar != null) {
            }
        }
        if (z5) {
            return;
        }
        h(bVar);
    }

    public final void d(e eVar, int i5) {
        int i6 = eVar.f16293i;
        if (i6 == -1) {
            eVar.d(this, i5);
            for (int i10 = 0; i10 < this.f16275b + 1; i10++) {
                e eVar2 = ((e[]) this.f16283l.f13144v)[i10];
            }
            return;
        }
        if (i6 == -1) {
            b l6 = l();
            l6.a = eVar;
            float f2 = i5;
            eVar.f16295w = f2;
            l6.f16268b = f2;
            l6.f16271e = true;
            c(l6);
            return;
        }
        b bVar = this.f16279f[i6];
        if (bVar.f16271e) {
            bVar.f16268b = i5;
            return;
        }
        if (bVar.f16270d.d() == 0) {
            bVar.f16271e = true;
            bVar.f16268b = i5;
            return;
        }
        b l7 = l();
        if (i5 < 0) {
            l7.f16268b = i5 * (-1);
            l7.f16270d.g(eVar, 1.0f);
        } else {
            l7.f16268b = i5;
            l7.f16270d.g(eVar, -1.0f);
        }
        c(l7);
    }

    public final void e(e eVar, e eVar2, int i5, int i6) {
        if (i6 == 8 && eVar2.f16296x && eVar.f16293i == -1) {
            eVar.d(this, eVar2.f16295w + i5);
            return;
        }
        b l6 = l();
        boolean z5 = false;
        if (i5 != 0) {
            if (i5 < 0) {
                i5 *= -1;
                z5 = true;
            }
            l6.f16268b = i5;
        }
        if (z5) {
            l6.f16270d.g(eVar, 1.0f);
            l6.f16270d.g(eVar2, -1.0f);
        } else {
            l6.f16270d.g(eVar, -1.0f);
            l6.f16270d.g(eVar2, 1.0f);
        }
        if (i6 != 8) {
            l6.a(this, i6);
        }
        c(l6);
    }

    public final void f(e eVar, e eVar2, int i5, int i6) {
        b l6 = l();
        e m5 = m();
        m5.f16294v = 0;
        l6.b(eVar, eVar2, m5, i5);
        if (i6 != 8) {
            l6.f16270d.g(j(i6), (int) (l6.f16270d.c(m5) * (-1.0f)));
        }
        c(l6);
    }

    public final void g(e eVar, e eVar2, int i5, int i6) {
        b l6 = l();
        e m5 = m();
        m5.f16294v = 0;
        l6.c(eVar, eVar2, m5, i5);
        if (i6 != 8) {
            l6.f16270d.g(j(i6), (int) (l6.f16270d.c(m5) * (-1.0f)));
        }
        c(l6);
    }

    public final void h(b bVar) {
        int i5;
        if (bVar.f16271e) {
            bVar.a.d(this, bVar.f16268b);
        } else {
            b[] bVarArr = this.f16279f;
            int i6 = this.j;
            bVarArr[i6] = bVar;
            e eVar = bVar.a;
            eVar.f16293i = i6;
            this.j = i6 + 1;
            eVar.e(this, bVar);
        }
        if (this.a) {
            int i10 = 0;
            while (i10 < this.j) {
                if (this.f16279f[i10] == null) {
                    System.out.println("WTF");
                }
                b bVar2 = this.f16279f[i10];
                if (bVar2 != null && bVar2.f16271e) {
                    bVar2.a.d(this, bVar2.f16268b);
                    ((a0) this.f16283l.f13142e).C(bVar2);
                    this.f16279f[i10] = null;
                    int i11 = i10 + 1;
                    int i12 = i11;
                    while (true) {
                        i5 = this.j;
                        if (i11 >= i5) {
                            break;
                        }
                        b[] bVarArr2 = this.f16279f;
                        int i13 = i11 - 1;
                        b bVar3 = bVarArr2[i11];
                        bVarArr2[i13] = bVar3;
                        e eVar2 = bVar3.a;
                        if (eVar2.f16293i == i11) {
                            eVar2.f16293i = i13;
                        }
                        i12 = i11;
                        i11++;
                    }
                    if (i12 < i5) {
                        this.f16279f[i12] = null;
                    }
                    this.j = i5 - 1;
                    i10--;
                }
                i10++;
            }
            this.a = false;
        }
    }

    public final void i() {
        for (int i5 = 0; i5 < this.j; i5++) {
            b bVar = this.f16279f[i5];
            bVar.a.f16295w = bVar.f16268b;
        }
    }

    public final e j(int i5) {
        if (this.f16282i + 1 >= this.f16278e) {
            o();
        }
        e a = a(4);
        float[] fArr = a.E;
        int i6 = this.f16275b + 1;
        this.f16275b = i6;
        this.f16282i++;
        a.f16292e = i6;
        a.f16294v = i5;
        ((e[]) this.f16283l.f13144v)[i6] = a;
        d dVar = this.f16276c;
        dVar.f16290i.f8000e = a;
        Arrays.fill(fArr, 0.0f);
        fArr[a.f16294v] = 1.0f;
        dVar.j(a);
        return a;
    }

    public final e k(Object obj) {
        if (obj == null) {
            return null;
        }
        if (this.f16282i + 1 >= this.f16278e) {
            o();
        }
        if (!(obj instanceof r0.c)) {
            return null;
        }
        r0.c cVar = (r0.c) obj;
        e eVar = cVar.f17084i;
        if (eVar == null) {
            cVar.k();
            eVar = cVar.f17084i;
        }
        int i5 = eVar.f16292e;
        r rVar = this.f16283l;
        if (i5 != -1 && i5 <= this.f16275b && ((e[]) rVar.f13144v)[i5] != null) {
            return eVar;
        }
        if (i5 != -1) {
            eVar.c();
        }
        int i6 = this.f16275b + 1;
        this.f16275b = i6;
        this.f16282i++;
        eVar.f16292e = i6;
        eVar.I = 1;
        ((e[]) rVar.f13144v)[i6] = eVar;
        return eVar;
    }

    public final b l() {
        Object obj;
        r rVar = this.f16283l;
        a0 a0Var = (a0) rVar.f13142e;
        int i5 = a0Var.f124e;
        if (i5 > 0) {
            int i6 = i5 - 1;
            Object[] objArr = (Object[]) a0Var.f125i;
            obj = objArr[i6];
            objArr[i6] = null;
            a0Var.f124e = i6;
        } else {
            obj = null;
        }
        b bVar = (b) obj;
        if (bVar == null) {
            return new b(rVar);
        }
        bVar.a = null;
        bVar.f16270d.b();
        bVar.f16268b = 0.0f;
        bVar.f16271e = false;
        return bVar;
    }

    public final e m() {
        if (this.f16282i + 1 >= this.f16278e) {
            o();
        }
        e a = a(3);
        int i5 = this.f16275b + 1;
        this.f16275b = i5;
        this.f16282i++;
        a.f16292e = i5;
        ((e[]) this.f16283l.f13144v)[i5] = a;
        return a;
    }

    public final void o() {
        int i5 = this.f16277d * 2;
        this.f16277d = i5;
        this.f16279f = (b[]) Arrays.copyOf(this.f16279f, i5);
        r rVar = this.f16283l;
        rVar.f13144v = (e[]) Arrays.copyOf((e[]) rVar.f13144v, this.f16277d);
        int i6 = this.f16277d;
        this.f16281h = new boolean[i6];
        this.f16278e = i6;
        this.k = i6;
        Metrics metrics = f16274r;
        if (metrics != null) {
            metrics.f1214b = Math.max(metrics.f1214b, i6);
            long j = f16274r.f1214b;
        }
    }

    public final void p() {
        d dVar = this.f16276c;
        if (dVar.e()) {
            i();
            return;
        }
        if (!this.f16280g) {
            q(dVar);
            return;
        }
        Metrics metrics = f16274r;
        if (metrics != null) {
            metrics.f1215c++;
        }
        for (int i5 = 0; i5 < this.j; i5++) {
            if (!this.f16279f[i5].f16271e) {
                q(dVar);
                return;
            }
        }
        i();
    }

    public final void q(d dVar) {
        Metrics metrics = f16274r;
        if (metrics != null) {
            metrics.f1218f = Math.max(metrics.f1218f, this.f16282i);
            Metrics metrics2 = f16274r;
            metrics2.f1219g = Math.max(metrics2.f1219g, this.j);
        }
        int i5 = 0;
        while (true) {
            if (i5 >= this.j) {
                break;
            }
            b bVar = this.f16279f[i5];
            int i6 = 1;
            if (bVar.a.I != 1) {
                float f2 = 0.0f;
                if (bVar.f16268b < 0.0f) {
                    boolean z5 = false;
                    int i10 = 0;
                    while (!z5) {
                        i10 += i6;
                        float f10 = Float.MAX_VALUE;
                        int i11 = -1;
                        int i12 = -1;
                        int i13 = 0;
                        int i14 = 0;
                        while (i13 < this.j) {
                            b bVar2 = this.f16279f[i13];
                            if (bVar2.a.I != i6 && !bVar2.f16271e && bVar2.f16268b < f2) {
                                int d6 = bVar2.f16270d.d();
                                int i15 = 0;
                                while (i15 < d6) {
                                    e e9 = bVar2.f16270d.e(i15);
                                    float c6 = bVar2.f16270d.c(e9);
                                    if (c6 > f2) {
                                        for (int i16 = 0; i16 < 9; i16++) {
                                            float f11 = e9.f16297y[i16] / c6;
                                            if ((f11 < f10 && i16 == i14) || i16 > i14) {
                                                i14 = i16;
                                                i12 = e9.f16292e;
                                                i11 = i13;
                                                f10 = f11;
                                            }
                                        }
                                    }
                                    i15++;
                                    f2 = 0.0f;
                                }
                            }
                            i13++;
                            f2 = 0.0f;
                            i6 = 1;
                        }
                        if (i11 != -1) {
                            b bVar3 = this.f16279f[i11];
                            bVar3.a.f16293i = -1;
                            bVar3.g(((e[]) this.f16283l.f13144v)[i12]);
                            e eVar = bVar3.a;
                            eVar.f16293i = i11;
                            eVar.e(this, bVar3);
                        } else {
                            z5 = true;
                        }
                        if (i10 > this.f16282i / 2) {
                            z5 = true;
                        }
                        f2 = 0.0f;
                        i6 = 1;
                    }
                }
            }
            i5++;
        }
        r(dVar);
        i();
    }

    public final void r(b bVar) {
        boolean z5;
        int i5 = 0;
        for (int i6 = 0; i6 < this.f16282i; i6++) {
            this.f16281h[i6] = false;
        }
        boolean z6 = false;
        int i10 = 0;
        while (!z6) {
            int i11 = 1;
            i10++;
            if (i10 >= this.f16282i * 2) {
                return;
            }
            e eVar = bVar.a;
            if (eVar != null) {
                this.f16281h[eVar.f16292e] = true;
            }
            e d6 = bVar.d(this.f16281h);
            if (d6 != null) {
                boolean[] zArr = this.f16281h;
                int i12 = d6.f16292e;
                if (zArr[i12]) {
                    return;
                } else {
                    zArr[i12] = true;
                }
            }
            if (d6 != null) {
                float f2 = Float.MAX_VALUE;
                int i13 = i5;
                int i14 = -1;
                while (i13 < this.j) {
                    b bVar2 = this.f16279f[i13];
                    if (bVar2.a.I != i11 && !bVar2.f16271e) {
                        a aVar = bVar2.f16270d;
                        int i15 = aVar.f16262d;
                        if (i15 != -1) {
                            for (int i16 = 0; i15 != -1 && i16 < aVar.f16260b; i16++) {
                                if (((int[]) aVar.f16267i)[i15] == d6.f16292e) {
                                    z5 = true;
                                    break;
                                }
                                i15 = ((int[]) aVar.j)[i15];
                            }
                        }
                        z5 = false;
                        if (z5) {
                            float c6 = bVar2.f16270d.c(d6);
                            if (c6 < 0.0f) {
                                float f10 = (-bVar2.f16268b) / c6;
                                if (f10 < f2) {
                                    f2 = f10;
                                    i14 = i13;
                                }
                            }
                        }
                    }
                    i13++;
                    i11 = 1;
                }
                if (i14 > -1) {
                    b bVar3 = this.f16279f[i14];
                    bVar3.a.f16293i = -1;
                    bVar3.g(d6);
                    e eVar2 = bVar3.a;
                    eVar2.f16293i = i14;
                    eVar2.e(this, bVar3);
                }
            } else {
                z6 = true;
            }
            i5 = 0;
        }
    }

    public final void s() {
        for (int i5 = 0; i5 < this.j; i5++) {
            b bVar = this.f16279f[i5];
            if (bVar != null) {
                ((a0) this.f16283l.f13142e).C(bVar);
            }
            this.f16279f[i5] = null;
        }
    }

    public final void t() {
        r rVar;
        int i5 = 0;
        while (true) {
            rVar = this.f16283l;
            e[] eVarArr = (e[]) rVar.f13144v;
            if (i5 >= eVarArr.length) {
                break;
            }
            e eVar = eVarArr[i5];
            if (eVar != null) {
                eVar.c();
            }
            i5++;
        }
        a0 a0Var = (a0) rVar.f13143i;
        e[] eVarArr2 = this.f16284m;
        int i6 = this.f16285n;
        a0Var.getClass();
        if (i6 > eVarArr2.length) {
            i6 = eVarArr2.length;
        }
        for (int i10 = 0; i10 < i6; i10++) {
            e eVar2 = eVarArr2[i10];
            int i11 = a0Var.f124e;
            Object[] objArr = (Object[]) a0Var.f125i;
            if (i11 < objArr.length) {
                objArr[i11] = eVar2;
                a0Var.f124e = i11 + 1;
            }
        }
        this.f16285n = 0;
        Arrays.fill((e[]) rVar.f13144v, (Object) null);
        this.f16275b = 0;
        d dVar = this.f16276c;
        dVar.f16289h = 0;
        dVar.f16268b = 0.0f;
        this.f16282i = 1;
        for (int i12 = 0; i12 < this.j; i12++) {
            b bVar = this.f16279f[i12];
        }
        s();
        this.j = 0;
        this.f16286o = new b(rVar);
    }
}
