package ad;

import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import com.google.android.exoplayer2.Format;
import hc.g1;
import java.util.Collections;
import jc.p0;

/* loaded from: classes3.dex */
public final class t implements i {
    public final String a;

    /* renamed from: b, reason: collision with root package name */
    public final ke.w f475b;

    /* renamed from: c, reason: collision with root package name */
    public final ke.v f476c;

    /* renamed from: d, reason: collision with root package name */
    public qc.v f477d;

    /* renamed from: e, reason: collision with root package name */
    public String f478e;

    /* renamed from: f, reason: collision with root package name */
    public Format f479f;

    /* renamed from: g, reason: collision with root package name */
    public int f480g;

    /* renamed from: h, reason: collision with root package name */
    public int f481h;

    /* renamed from: i, reason: collision with root package name */
    public int f482i;
    public int j;
    public long k;

    /* renamed from: l, reason: collision with root package name */
    public boolean f483l;

    /* renamed from: m, reason: collision with root package name */
    public int f484m;

    /* renamed from: n, reason: collision with root package name */
    public int f485n;

    /* renamed from: o, reason: collision with root package name */
    public int f486o;

    /* renamed from: p, reason: collision with root package name */
    public boolean f487p;

    /* renamed from: q, reason: collision with root package name */
    public long f488q;

    /* renamed from: r, reason: collision with root package name */
    public int f489r;

    /* renamed from: s, reason: collision with root package name */
    public long f490s;

    /* renamed from: t, reason: collision with root package name */
    public int f491t;

    /* renamed from: u, reason: collision with root package name */
    public String f492u;

    public t(String str) {
        this.a = str;
        ke.w wVar = new ke.w(IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET);
        this.f475b = wVar;
        byte[] bArr = wVar.a;
        this.f476c = new ke.v(bArr, bArr.length);
        this.k = -9223372036854775807L;
    }

    @Override // ad.i
    public final void a() {
        this.f480g = 0;
        this.k = -9223372036854775807L;
        this.f483l = false;
    }

    /* JADX WARN: Code restructure failed: missing block: B:135:0x0192, code lost:
    
        if (r23.f483l == false) goto L88;
     */
    @Override // ad.i
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void c(ke.w wVar) {
        int i5;
        boolean h6;
        ke.b.l(this.f477d);
        while (wVar.a() > 0) {
            int i6 = this.f480g;
            if (i6 != 0) {
                if (i6 != 1) {
                    ke.w wVar2 = this.f475b;
                    ke.v vVar = this.f476c;
                    if (i6 == 2) {
                        int u5 = ((this.j & (-225)) << 8) | wVar.u();
                        this.f482i = u5;
                        if (u5 > wVar2.a.length) {
                            wVar2.C(u5);
                            byte[] bArr = wVar2.a;
                            vVar.getClass();
                            vVar.o(bArr, bArr.length);
                        }
                        this.f481h = 0;
                        this.f480g = 3;
                    } else {
                        if (i6 != 3) {
                            throw new IllegalStateException();
                        }
                        int min = Math.min(wVar.a(), this.f482i - this.f481h);
                        wVar.e(vVar.f13356b, this.f481h, min);
                        int i10 = this.f481h + min;
                        this.f481h = i10;
                        if (i10 == this.f482i) {
                            vVar.p(0);
                            if (!vVar.h()) {
                                this.f483l = true;
                                int i11 = vVar.i(1);
                                int i12 = i11 == 1 ? vVar.i(1) : 0;
                                this.f484m = i12;
                                if (i12 != 0) {
                                    throw g1.a(null, null);
                                }
                                if (i11 == 1) {
                                    vVar.i((vVar.i(2) + 1) * 8);
                                }
                                if (!vVar.h()) {
                                    throw g1.a(null, null);
                                }
                                this.f485n = vVar.i(6);
                                int i13 = vVar.i(4);
                                int i14 = vVar.i(3);
                                if (i13 != 0 || i14 != 0) {
                                    throw g1.a(null, null);
                                }
                                if (i11 == 0) {
                                    int g6 = vVar.g();
                                    int b10 = vVar.b();
                                    p0 i15 = jc.a.i(vVar, true);
                                    this.f492u = (String) i15.f12604c;
                                    this.f489r = i15.a;
                                    this.f491t = i15.f12603b;
                                    int b11 = b10 - vVar.b();
                                    vVar.p(g6);
                                    byte[] bArr2 = new byte[(b11 + 7) / 8];
                                    vVar.j(bArr2, b11);
                                    hc.f0 f0Var = new hc.f0();
                                    f0Var.a = this.f478e;
                                    f0Var.k = "audio/mp4a-latm";
                                    f0Var.f9676h = this.f492u;
                                    f0Var.f9690x = this.f491t;
                                    f0Var.f9691y = this.f489r;
                                    f0Var.f9679m = Collections.singletonList(bArr2);
                                    f0Var.f9671c = this.a;
                                    Format format = new Format(f0Var);
                                    if (!format.equals(this.f479f)) {
                                        this.f479f = format;
                                        this.f490s = 1024000000 / format.W;
                                        this.f477d.e(format);
                                    }
                                } else {
                                    int b12 = vVar.b();
                                    p0 i16 = jc.a.i(vVar, true);
                                    this.f492u = (String) i16.f12604c;
                                    this.f489r = i16.a;
                                    this.f491t = i16.f12603b;
                                    vVar.s(vVar.i((vVar.i(2) + 1) * 8) - (b12 - vVar.b()));
                                }
                                int i17 = vVar.i(3);
                                this.f486o = i17;
                                if (i17 == 0) {
                                    vVar.s(8);
                                } else if (i17 == 1) {
                                    vVar.s(9);
                                } else if (i17 == 3 || i17 == 4 || i17 == 5) {
                                    vVar.s(6);
                                } else {
                                    if (i17 != 6 && i17 != 7) {
                                        throw new IllegalStateException();
                                    }
                                    vVar.s(1);
                                }
                                boolean h7 = vVar.h();
                                this.f487p = h7;
                                this.f488q = 0L;
                                if (h7) {
                                    if (i11 == 1) {
                                        this.f488q = vVar.i((vVar.i(2) + 1) * 8);
                                    } else {
                                        do {
                                            h6 = vVar.h();
                                            this.f488q = (this.f488q << 8) + vVar.i(8);
                                        } while (h6);
                                    }
                                }
                                if (vVar.h()) {
                                    vVar.s(8);
                                }
                            }
                            if (this.f484m != 0) {
                                throw g1.a(null, null);
                            }
                            if (this.f485n != 0) {
                                throw g1.a(null, null);
                            }
                            if (this.f486o != 0) {
                                throw g1.a(null, null);
                            }
                            int i18 = 0;
                            do {
                                i5 = vVar.i(8);
                                i18 += i5;
                            } while (i5 == 255);
                            int g10 = vVar.g();
                            if ((g10 & 7) == 0) {
                                wVar2.F(g10 >> 3);
                            } else {
                                vVar.j(wVar2.a, i18 * 8);
                                wVar2.F(0);
                            }
                            this.f477d.d(i18, wVar2);
                            long j = this.k;
                            if (j != -9223372036854775807L) {
                                this.f477d.b(j, 1, i18, 0, null);
                                this.k += this.f490s;
                            }
                            if (this.f487p) {
                                vVar.s((int) this.f488q);
                            }
                            this.f480g = 0;
                        } else {
                            continue;
                        }
                    }
                } else {
                    int u6 = wVar.u();
                    if ((u6 & 224) == 224) {
                        this.j = u6;
                        this.f480g = 2;
                    } else if (u6 != 86) {
                        this.f480g = 0;
                    }
                }
            } else if (wVar.u() == 86) {
                this.f480g = 1;
            }
        }
    }

    @Override // ad.i
    public final void d(qc.l lVar, g0 g0Var) {
        g0Var.a();
        g0Var.b();
        this.f477d = lVar.y(g0Var.f367d, 1);
        g0Var.b();
        this.f478e = g0Var.f368e;
    }

    @Override // ad.i
    public final void f(int i5, long j) {
        if (j != -9223372036854775807L) {
            this.k = j;
        }
    }

    @Override // ad.i
    public final void e() {
    }
}
