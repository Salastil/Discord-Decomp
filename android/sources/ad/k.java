package ad;

import android.util.Pair;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import com.google.android.exoplayer2.Format;
import java.util.Arrays;
import java.util.Collections;

/* loaded from: classes3.dex */
public final class k implements i {

    /* renamed from: q, reason: collision with root package name */
    public static final double[] f379q = {23.976023976023978d, 24.0d, 25.0d, 29.97002997002997d, 30.0d, 50.0d, 59.94005994005994d, 60.0d};
    public String a;

    /* renamed from: b, reason: collision with root package name */
    public qc.v f380b;

    /* renamed from: c, reason: collision with root package name */
    public final e4.r f381c;

    /* renamed from: d, reason: collision with root package name */
    public final ke.w f382d;

    /* renamed from: e, reason: collision with root package name */
    public final v f383e;

    /* renamed from: f, reason: collision with root package name */
    public final boolean[] f384f = new boolean[4];

    /* renamed from: g, reason: collision with root package name */
    public final j f385g;

    /* renamed from: h, reason: collision with root package name */
    public long f386h;

    /* renamed from: i, reason: collision with root package name */
    public boolean f387i;
    public boolean j;
    public long k;

    /* renamed from: l, reason: collision with root package name */
    public long f388l;

    /* renamed from: m, reason: collision with root package name */
    public long f389m;

    /* renamed from: n, reason: collision with root package name */
    public long f390n;

    /* renamed from: o, reason: collision with root package name */
    public boolean f391o;

    /* renamed from: p, reason: collision with root package name */
    public boolean f392p;

    public k(e4.r rVar) {
        this.f381c = rVar;
        j jVar = new j();
        jVar.f378d = new byte[IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT];
        this.f385g = jVar;
        if (rVar != null) {
            this.f383e = new v(178);
            this.f382d = new ke.w();
        } else {
            this.f383e = null;
            this.f382d = null;
        }
        this.f388l = -9223372036854775807L;
        this.f390n = -9223372036854775807L;
    }

    @Override // ad.i
    public final void a() {
        ke.b.o(this.f384f);
        j jVar = this.f385g;
        jVar.a = false;
        jVar.f376b = 0;
        jVar.f377c = 0;
        v vVar = this.f383e;
        if (vVar != null) {
            vVar.c();
        }
        this.f386h = 0L;
        this.f387i = false;
        this.f388l = -9223372036854775807L;
        this.f390n = -9223372036854775807L;
    }

    /* JADX WARN: Removed duplicated region for block: B:44:0x01aa  */
    /* JADX WARN: Removed duplicated region for block: B:47:0x01c4  */
    /* JADX WARN: Removed duplicated region for block: B:51:0x01f3  */
    /* JADX WARN: Removed duplicated region for block: B:54:0x01f5  */
    /* JADX WARN: Removed duplicated region for block: B:57:0x01d9  */
    @Override // ad.i
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void c(ke.w wVar) {
        j jVar;
        v vVar;
        int i5;
        boolean z5;
        long j;
        long j5;
        boolean z6;
        boolean z7;
        long j7;
        int i6;
        float f2;
        int i10;
        float f10;
        int i11;
        long j10;
        ke.b.l(this.f380b);
        int i12 = wVar.f13363b;
        int i13 = wVar.f13364c;
        byte[] bArr = wVar.a;
        this.f386h += wVar.a();
        this.f380b.d(wVar.a(), wVar);
        while (true) {
            int u5 = ke.b.u(bArr, i12, i13, this.f384f);
            jVar = this.f385g;
            vVar = this.f383e;
            if (u5 == i13) {
                break;
            }
            int i14 = u5 + 3;
            int i15 = wVar.a[i14] & 255;
            int i16 = u5 - i12;
            if (this.j) {
                i5 = i13;
            } else {
                if (i16 > 0) {
                    jVar.a(bArr, i12, u5);
                }
                int i17 = i16 < 0 ? -i16 : 0;
                if (jVar.a) {
                    int i18 = jVar.f376b - i17;
                    jVar.f376b = i18;
                    if (jVar.f377c == 0 && i15 == 181) {
                        jVar.f377c = i18;
                        i5 = i13;
                    } else {
                        jVar.a = false;
                        String str = this.a;
                        str.getClass();
                        byte[] copyOf = Arrays.copyOf(jVar.f378d, jVar.f376b);
                        int i19 = copyOf[4] & 255;
                        byte b10 = copyOf[5];
                        i5 = i13;
                        int i20 = ((b10 & 255) >> 4) | (i19 << 4);
                        int i21 = (copyOf[6] & 255) | ((b10 & 15) << 8);
                        int i22 = (copyOf[7] & 240) >> 4;
                        if (i22 == 2) {
                            f2 = i21 * 4;
                            i10 = i20 * 3;
                        } else if (i22 == 3) {
                            f2 = i21 * 16;
                            i10 = i20 * 9;
                        } else if (i22 != 4) {
                            f10 = 1.0f;
                            hc.f0 f0Var = new hc.f0();
                            f0Var.a = str;
                            f0Var.k = "video/mpeg2";
                            f0Var.f9682p = i20;
                            f0Var.f9683q = i21;
                            f0Var.f9686t = f10;
                            f0Var.f9679m = Collections.singletonList(copyOf);
                            Format format = new Format(f0Var);
                            i11 = (copyOf[7] & 15) - 1;
                            if (i11 >= 0 || i11 >= 8) {
                                j10 = 0;
                            } else {
                                double d6 = f379q[i11];
                                byte b11 = copyOf[jVar.f377c + 9];
                                int i23 = (b11 & 96) >> 5;
                                if (i23 != (b11 & 31)) {
                                    d6 = ((i23 + 1.0d) / (r6 + 1)) * d6;
                                }
                                j10 = (long) (1000000.0d / d6);
                            }
                            Pair create = Pair.create(format, Long.valueOf(j10));
                            this.f380b.e((Format) create.first);
                            this.k = ((Long) create.second).longValue();
                            this.j = true;
                        } else {
                            f2 = i21 * 121;
                            i10 = i20 * 100;
                        }
                        f10 = f2 / i10;
                        hc.f0 f0Var2 = new hc.f0();
                        f0Var2.a = str;
                        f0Var2.k = "video/mpeg2";
                        f0Var2.f9682p = i20;
                        f0Var2.f9683q = i21;
                        f0Var2.f9686t = f10;
                        f0Var2.f9679m = Collections.singletonList(copyOf);
                        Format format2 = new Format(f0Var2);
                        i11 = (copyOf[7] & 15) - 1;
                        if (i11 >= 0) {
                        }
                        j10 = 0;
                        Pair create2 = Pair.create(format2, Long.valueOf(j10));
                        this.f380b.e((Format) create2.first);
                        this.k = ((Long) create2.second).longValue();
                        this.j = true;
                    }
                } else {
                    i5 = i13;
                    if (i15 == 179) {
                        jVar.a = true;
                    }
                }
                jVar.a(j.f375e, 0, 3);
            }
            if (vVar != null) {
                if (i16 > 0) {
                    vVar.a(bArr, i12, u5);
                    i6 = 0;
                } else {
                    i6 = -i16;
                }
                if (vVar.b(i6)) {
                    int M = ke.b.M(vVar.f504d, vVar.f505e);
                    int i24 = ke.d0.a;
                    byte[] bArr2 = vVar.f504d;
                    ke.w wVar2 = this.f382d;
                    wVar2.D(bArr2, M);
                    this.f381c.f(this.f390n, wVar2);
                }
                if (i15 == 178) {
                    z5 = true;
                    if (wVar.a[u5 + 2] == 1) {
                        vVar.d(i15);
                    }
                    if (i15 != 0 || i15 == 179) {
                        int i25 = i5 - u5;
                        if (this.f392p && this.j) {
                            j7 = this.f390n;
                            if (j7 != -9223372036854775807L) {
                                j = -9223372036854775807L;
                                this.f380b.b(j7, this.f391o ? 1 : 0, ((int) (this.f386h - this.f389m)) - i25, i25, null);
                                if (this.f387i || this.f392p) {
                                    this.f389m = this.f386h - i25;
                                    j5 = this.f388l;
                                    if (j5 == j) {
                                        long j11 = this.f390n;
                                        j5 = j11 != j ? j11 + this.k : j;
                                    }
                                    this.f390n = j5;
                                    z6 = false;
                                    this.f391o = false;
                                    this.f388l = j;
                                    z7 = true;
                                    this.f387i = true;
                                } else {
                                    z7 = true;
                                    z6 = false;
                                }
                                this.f392p = i15 == 0 ? z7 : z6;
                            }
                        }
                        j = -9223372036854775807L;
                        if (this.f387i) {
                        }
                        this.f389m = this.f386h - i25;
                        j5 = this.f388l;
                        if (j5 == j) {
                        }
                        this.f390n = j5;
                        z6 = false;
                        this.f391o = false;
                        this.f388l = j;
                        z7 = true;
                        this.f387i = true;
                        this.f392p = i15 == 0 ? z7 : z6;
                    } else if (i15 == 184) {
                        this.f391o = z5;
                    }
                    i12 = i14;
                    i13 = i5;
                }
            }
            z5 = true;
            if (i15 != 0) {
            }
            int i252 = i5 - u5;
            if (this.f392p) {
                j7 = this.f390n;
                if (j7 != -9223372036854775807L) {
                }
            }
            j = -9223372036854775807L;
            if (this.f387i) {
            }
            this.f389m = this.f386h - i252;
            j5 = this.f388l;
            if (j5 == j) {
            }
            this.f390n = j5;
            z6 = false;
            this.f391o = false;
            this.f388l = j;
            z7 = true;
            this.f387i = true;
            this.f392p = i15 == 0 ? z7 : z6;
            i12 = i14;
            i13 = i5;
        }
        if (!this.j) {
            jVar.a(bArr, i12, i13);
        }
        if (vVar != null) {
            vVar.a(bArr, i12, i13);
        }
    }

    @Override // ad.i
    public final void d(qc.l lVar, g0 g0Var) {
        g0Var.a();
        g0Var.b();
        this.a = g0Var.f368e;
        g0Var.b();
        this.f380b = lVar.y(g0Var.f367d, 2);
        e4.r rVar = this.f381c;
        if (rVar != null) {
            rVar.h(lVar, g0Var);
        }
    }

    @Override // ad.i
    public final void f(int i5, long j) {
        this.f388l = j;
    }

    @Override // ad.i
    public final void e() {
    }
}
