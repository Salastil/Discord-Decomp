package uc;

import androidx.recyclerview.widget.h0;
import com.google.android.exoplayer2.Format;
import hc.f0;
import java.util.Collections;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import jc.p0;
import ke.w;
import nd.b1;
import qc.g;
import qc.i;
import qc.j;
import qc.k;
import qc.l;
import qc.m;
import qc.n;
import qc.q;
import qc.v;

/* loaded from: classes3.dex */
public final class b implements j {
    public final w a = new w(4);

    /* renamed from: b, reason: collision with root package name */
    public final w f18833b = new w(9);

    /* renamed from: c, reason: collision with root package name */
    public final w f18834c = new w(11);

    /* renamed from: d, reason: collision with root package name */
    public final w f18835d = new w();

    /* renamed from: e, reason: collision with root package name */
    public final c f18836e;

    /* renamed from: f, reason: collision with root package name */
    public l f18837f;

    /* renamed from: g, reason: collision with root package name */
    public int f18838g;

    /* renamed from: h, reason: collision with root package name */
    public boolean f18839h;

    /* renamed from: i, reason: collision with root package name */
    public long f18840i;
    public int j;
    public int k;

    /* renamed from: l, reason: collision with root package name */
    public int f18841l;

    /* renamed from: m, reason: collision with root package name */
    public long f18842m;

    /* renamed from: n, reason: collision with root package name */
    public boolean f18843n;

    /* renamed from: o, reason: collision with root package name */
    public a f18844o;

    /* renamed from: p, reason: collision with root package name */
    public d f18845p;

    public b() {
        c cVar = new c(8, new i());
        cVar.f18846i = -9223372036854775807L;
        cVar.f18847v = new long[0];
        cVar.f18848w = new long[0];
        this.f18836e = cVar;
        this.f18838g = 1;
    }

    @Override // qc.j
    public final void a(l lVar) {
        this.f18837f = lVar;
    }

    public final w b(k kVar) {
        int i5 = this.f18841l;
        w wVar = this.f18835d;
        byte[] bArr = wVar.a;
        if (i5 > bArr.length) {
            wVar.D(new byte[Math.max(bArr.length * 2, i5)], 0);
        } else {
            wVar.F(0);
        }
        wVar.E(this.f18841l);
        kVar.readFully(wVar.a, 0, this.f18841l);
        return wVar;
    }

    /* JADX WARN: Removed duplicated region for block: B:71:0x0390  */
    /* JADX WARN: Removed duplicated region for block: B:73:0x0394  */
    /* JADX WARN: Removed duplicated region for block: B:76:0x039e A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:78:0x0007 A[SYNTHETIC] */
    @Override // qc.j
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final int e(k kVar, m mVar) {
        long j;
        long j5;
        int i5;
        long j7;
        int i6;
        boolean z5;
        int i10;
        ke.b.l(this.f18837f);
        while (true) {
            int i11 = this.f18838g;
            if (i11 == 1) {
                w wVar = this.f18833b;
                if (!((g) kVar).a(wVar.a, 0, 9, true)) {
                    return -1;
                }
                wVar.F(0);
                wVar.G(4);
                int u5 = wVar.u();
                boolean z6 = (u5 & 4) != 0;
                boolean z7 = (u5 & 1) != 0;
                if (z6 && this.f18844o == null) {
                    this.f18844o = new a(8, this.f18837f.y(8, 1));
                }
                if (z7 && this.f18845p == null) {
                    this.f18845p = new d(this.f18837f.y(9, 2));
                }
                this.f18837f.r();
                this.j = wVar.g() - 5;
                this.f18838g = 2;
            } else if (i11 == 2) {
                ((g) kVar).u(this.j);
                this.j = 0;
                this.f18838g = 3;
            } else if (i11 == 3) {
                w wVar2 = this.f18834c;
                if (!((g) kVar).a(wVar2.a, 0, 11, true)) {
                    return -1;
                }
                wVar2.F(0);
                this.k = wVar2.u();
                this.f18841l = wVar2.w();
                this.f18842m = wVar2.w();
                this.f18842m = ((wVar2.u() << 24) | this.f18842m) * 1000;
                wVar2.G(3);
                this.f18838g = 4;
            } else {
                if (i11 != 4) {
                    throw new IllegalStateException();
                }
                boolean z8 = this.f18839h;
                c cVar = this.f18836e;
                if (z8) {
                    j = this.f18840i + this.f18842m;
                } else if (cVar.f18846i == -9223372036854775807L) {
                    j5 = 0;
                    i5 = this.k;
                    if (i5 == 8 || this.f18844o == null) {
                        if (i5 == 9 || this.f18845p == null) {
                            j7 = -9223372036854775807L;
                            i6 = 0;
                            if (i5 == 18 || this.f18843n) {
                                ((g) kVar).u(this.f18841l);
                                z5 = false;
                                i10 = 0;
                            } else {
                                w b10 = b(kVar);
                                cVar.getClass();
                                cVar.getClass();
                                if (b10.u() == 2 && "onMetaData".equals(c.B0(b10)) && b10.a() != 0 && b10.u() == 8) {
                                    HashMap A0 = c.A0(b10);
                                    Object obj = A0.get("duration");
                                    double d6 = 1000000.0d;
                                    if (obj instanceof Double) {
                                        double doubleValue = ((Double) obj).doubleValue();
                                        if (doubleValue > 0.0d) {
                                            cVar.f18846i = (long) (doubleValue * 1000000.0d);
                                        }
                                    }
                                    Object obj2 = A0.get("keyframes");
                                    if (obj2 instanceof Map) {
                                        Map map = (Map) obj2;
                                        Object obj3 = map.get("filepositions");
                                        Object obj4 = map.get("times");
                                        if ((obj3 instanceof List) && (obj4 instanceof List)) {
                                            List list = (List) obj3;
                                            List list2 = (List) obj4;
                                            int size = list2.size();
                                            cVar.f18847v = new long[size];
                                            cVar.f18848w = new long[size];
                                            int i12 = 0;
                                            while (i12 < size) {
                                                Object obj5 = list.get(i12);
                                                Object obj6 = list2.get(i12);
                                                if (!(obj6 instanceof Double) || !(obj5 instanceof Double)) {
                                                    cVar.f18847v = new long[0];
                                                    cVar.f18848w = new long[0];
                                                    break;
                                                }
                                                double d7 = d6;
                                                cVar.f18847v[i12] = (long) (((Double) obj6).doubleValue() * d7);
                                                cVar.f18848w[i12] = ((Double) obj5).longValue();
                                                i12++;
                                                d6 = d7;
                                            }
                                        }
                                    }
                                }
                                long j10 = cVar.f18846i;
                                if (j10 != -9223372036854775807L) {
                                    this.f18837f.c(new q(j10, cVar.f18848w, cVar.f18847v));
                                    this.f18843n = true;
                                }
                            }
                        } else {
                            if (!this.f18843n) {
                                this.f18837f.c(new n(-9223372036854775807L));
                                this.f18843n = true;
                            }
                            d dVar = this.f18845p;
                            w b11 = b(kVar);
                            dVar.getClass();
                            int u6 = b11.u();
                            int i13 = (u6 >> 4) & 15;
                            int i14 = u6 & 15;
                            if (i14 != 7) {
                                throw new b1(k0.d.i(i14, "Video format not supported: "), 1);
                            }
                            dVar.E = i13;
                            if (i13 != 5) {
                                w wVar3 = dVar.f18849i;
                                v vVar = (v) dVar.f3143e;
                                w wVar4 = dVar.f18850v;
                                int u10 = b11.u();
                                byte[] bArr = b11.a;
                                j7 = -9223372036854775807L;
                                int i15 = b11.f13363b;
                                int i16 = i15 + 1;
                                b11.f13363b = i16;
                                int i17 = ((bArr[i15] & 255) << 24) >> 8;
                                i6 = 0;
                                b11.f13363b = i15 + 2;
                                int i18 = ((bArr[i16] & 255) << 8) | i17;
                                b11.f13363b = i15 + 3;
                                long j11 = (((bArr[r7] & 255) | i18) * 1000) + j5;
                                boolean z10 = false;
                                if (u10 == 0 && !dVar.f18852x) {
                                    byte[] bArr2 = new byte[b11.a()];
                                    w wVar5 = new w(bArr2);
                                    b11.e(bArr2, 0, b11.a());
                                    le.a a = le.a.a(wVar5);
                                    dVar.f18851w = a.f13845b;
                                    f0 f0Var = new f0();
                                    f0Var.k = "video/avc";
                                    f0Var.f9676h = a.f13852i;
                                    f0Var.f9682p = a.f13846c;
                                    f0Var.f9683q = a.f13847d;
                                    f0Var.f9686t = a.f13851h;
                                    f0Var.f9679m = a.a;
                                    vVar.e(new Format(f0Var));
                                    dVar.f18852x = true;
                                } else if (u10 == 1 && dVar.f18852x) {
                                    int i19 = dVar.E == 1 ? 1 : 0;
                                    if (dVar.f18853y || i19 != 0) {
                                        byte[] bArr3 = wVar4.a;
                                        bArr3[0] = 0;
                                        bArr3[1] = 0;
                                        bArr3[2] = 0;
                                        int i20 = 4 - dVar.f18851w;
                                        int i21 = 0;
                                        while (b11.a() > 0) {
                                            b11.e(wVar4.a, i20, dVar.f18851w);
                                            wVar4.F(0);
                                            int x5 = wVar4.x();
                                            wVar3.F(0);
                                            vVar.d(4, wVar3);
                                            vVar.d(x5, b11);
                                            i21 = i21 + 4 + x5;
                                        }
                                        ((v) dVar.f3143e).b(j11, i19, i21, 0, null);
                                        dVar.f18853y = true;
                                        z10 = true;
                                    }
                                }
                                if (z10) {
                                    i10 = 1;
                                    z5 = true;
                                }
                            } else {
                                j7 = -9223372036854775807L;
                                i6 = 0;
                            }
                        }
                        i10 = i6;
                        z5 = true;
                    } else {
                        if (!this.f18843n) {
                            this.f18837f.c(new n(-9223372036854775807L));
                            this.f18843n = true;
                        }
                        a aVar = this.f18844o;
                        w b12 = b(kVar);
                        v vVar2 = (v) aVar.f3143e;
                        if (aVar.f18830i) {
                            b12.G(1);
                        } else {
                            int u11 = b12.u();
                            int i22 = (u11 >> 4) & 15;
                            aVar.f18832w = i22;
                            if (i22 == 2) {
                                int i23 = a.f18829x[(u11 >> 2) & 3];
                                f0 f0Var2 = new f0();
                                f0Var2.k = "audio/mpeg";
                                f0Var2.f9690x = 1;
                                f0Var2.f9691y = i23;
                                vVar2.e(new Format(f0Var2));
                                aVar.f18831v = true;
                            } else if (i22 == 7 || i22 == 8) {
                                String str = i22 == 7 ? "audio/g711-alaw" : "audio/g711-mlaw";
                                f0 f0Var3 = new f0();
                                f0Var3.k = str;
                                f0Var3.f9690x = 1;
                                f0Var3.f9691y = 8000;
                                vVar2.e(new Format(f0Var3));
                                aVar.f18831v = true;
                            } else if (i22 != 10) {
                                throw new b1("Audio format not supported: " + aVar.f18832w, 1);
                            }
                            aVar.f18830i = true;
                        }
                        v vVar3 = (v) aVar.f3143e;
                        i10 = 1;
                        if (aVar.f18832w == 2) {
                            int a10 = b12.a();
                            vVar3.d(a10, b12);
                            ((v) aVar.f3143e).b(j5, 1, a10, 0, null);
                        } else {
                            int u12 = b12.u();
                            if (u12 == 0 && !aVar.f18831v) {
                                int a11 = b12.a();
                                byte[] bArr4 = new byte[a11];
                                b12.e(bArr4, 0, a11);
                                p0 i24 = jc.a.i(new ke.v(bArr4, a11), false);
                                f0 f0Var4 = new f0();
                                f0Var4.k = "audio/mp4a-latm";
                                f0Var4.f9676h = (String) i24.f12604c;
                                f0Var4.f9690x = i24.f12603b;
                                f0Var4.f9691y = i24.a;
                                f0Var4.f9679m = Collections.singletonList(bArr4);
                                vVar3.e(new Format(f0Var4));
                                aVar.f18831v = true;
                            } else if (aVar.f18832w != 10 || u12 == 1) {
                                int a12 = b12.a();
                                vVar3.d(a12, b12);
                                ((v) aVar.f3143e).b(j5, 1, a12, 0, null);
                            }
                            i10 = 0;
                        }
                        z5 = true;
                        j7 = -9223372036854775807L;
                        i6 = 0;
                    }
                    if (!this.f18839h && i10 != 0) {
                        this.f18839h = true;
                        this.f18840i = cVar.f18846i != j7 ? -this.f18842m : 0L;
                    }
                    this.j = 4;
                    this.f18838g = 2;
                    if (!z5) {
                        return i6;
                    }
                } else {
                    j = this.f18842m;
                }
                j5 = j;
                i5 = this.k;
                if (i5 == 8) {
                }
                if (i5 == 9) {
                }
                j7 = -9223372036854775807L;
                i6 = 0;
                if (i5 == 18) {
                }
                ((g) kVar).u(this.f18841l);
                z5 = false;
                i10 = 0;
                if (!this.f18839h) {
                    this.f18839h = true;
                    this.f18840i = cVar.f18846i != j7 ? -this.f18842m : 0L;
                }
                this.j = 4;
                this.f18838g = 2;
                if (!z5) {
                }
            }
        }
    }

    @Override // qc.j
    public final boolean f(k kVar) {
        w wVar = this.a;
        g gVar = (g) kVar;
        gVar.j(wVar.a, 0, 3, false);
        wVar.F(0);
        if (wVar.w() == 4607062) {
            gVar.j(wVar.a, 0, 2, false);
            wVar.F(0);
            if ((wVar.z() & h0.DEFAULT_SWIPE_ANIMATION_DURATION) == 0) {
                gVar.j(wVar.a, 0, 4, false);
                wVar.F(0);
                int g6 = wVar.g();
                gVar.f16775x = 0;
                gVar.b(g6, false);
                gVar.j(wVar.a, 0, 4, false);
                wVar.F(0);
                if (wVar.g() == 0) {
                    return true;
                }
            }
        }
        return false;
    }

    @Override // qc.j
    public final void g(long j, long j5) {
        if (j == 0) {
            this.f18838g = 1;
            this.f18839h = false;
        } else {
            this.f18838g = 3;
        }
        this.j = 0;
    }

    @Override // qc.j
    public final void release() {
    }
}
