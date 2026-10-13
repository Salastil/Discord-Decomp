package ad;

import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import com.google.android.exoplayer2.Format;
import java.util.Arrays;
import java.util.Collections;

/* loaded from: classes3.dex */
public final class n implements i {

    /* renamed from: l, reason: collision with root package name */
    public static final float[] f405l = {1.0f, 1.0f, 1.0909091f, 0.90909094f, 1.4545455f, 1.2121212f, 1.0f};
    public final e4.r a;

    /* renamed from: b, reason: collision with root package name */
    public final ke.w f406b;

    /* renamed from: c, reason: collision with root package name */
    public final boolean[] f407c = new boolean[4];

    /* renamed from: d, reason: collision with root package name */
    public final l f408d;

    /* renamed from: e, reason: collision with root package name */
    public final v f409e;

    /* renamed from: f, reason: collision with root package name */
    public m f410f;

    /* renamed from: g, reason: collision with root package name */
    public long f411g;

    /* renamed from: h, reason: collision with root package name */
    public String f412h;

    /* renamed from: i, reason: collision with root package name */
    public qc.v f413i;
    public boolean j;
    public long k;

    public n(e4.r rVar) {
        this.a = rVar;
        l lVar = new l();
        lVar.f397e = new byte[IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT];
        this.f408d = lVar;
        this.k = -9223372036854775807L;
        this.f409e = new v(178);
        this.f406b = new ke.w();
    }

    @Override // ad.i
    public final void a() {
        ke.b.o(this.f407c);
        l lVar = this.f408d;
        lVar.a = false;
        lVar.f395c = 0;
        lVar.f394b = 0;
        m mVar = this.f410f;
        if (mVar != null) {
            mVar.f398b = false;
            mVar.f399c = false;
            mVar.f400d = false;
            mVar.f401e = -1;
        }
        v vVar = this.f409e;
        if (vVar != null) {
            vVar.c();
        }
        this.f411g = 0L;
        this.k = -9223372036854775807L;
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:44:0x024d  */
    /* JADX WARN: Removed duplicated region for block: B:47:0x026b  */
    /* JADX WARN: Removed duplicated region for block: B:54:0x0282  */
    /* JADX WARN: Removed duplicated region for block: B:57:0x0284  */
    /* JADX WARN: Removed duplicated region for block: B:73:0x00ed  */
    /* JADX WARN: Removed duplicated region for block: B:78:0x0126  */
    /* JADX WARN: Removed duplicated region for block: B:81:0x013d  */
    @Override // ad.i
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void c(ke.w wVar) {
        int i5;
        int i6;
        boolean z5;
        m mVar;
        long j;
        int i10;
        int i11;
        float f2;
        ke.b.l(this.f410f);
        ke.b.l(this.f413i);
        int i12 = wVar.f13363b;
        int i13 = wVar.f13364c;
        byte[] bArr = wVar.a;
        this.f411g += wVar.a();
        this.f413i.d(wVar.a(), wVar);
        while (true) {
            int u5 = ke.b.u(bArr, i12, i13, this.f407c);
            l lVar = this.f408d;
            v vVar = this.f409e;
            if (u5 == i13) {
                if (!this.j) {
                    lVar.a(bArr, i12, i13);
                }
                this.f410f.a(bArr, i12, i13);
                if (vVar != null) {
                    vVar.a(bArr, i12, i13);
                    return;
                }
                return;
            }
            int i14 = u5 + 3;
            byte b10 = wVar.a[i14];
            int i15 = b10 & 255;
            int i16 = u5 - i12;
            if (this.j) {
                i5 = i13;
                i6 = i14;
            } else {
                if (i16 > 0) {
                    lVar.a(bArr, i12, u5);
                }
                int i17 = i16 < 0 ? -i16 : 0;
                int i18 = lVar.f394b;
                if (i18 != 0) {
                    i5 = i13;
                    if (i18 == 1) {
                        i6 = i14;
                        i11 = 0;
                        if (i15 != 181) {
                            ke.b.N("H263Reader", "Unexpected start code value");
                            lVar.a = false;
                            lVar.f395c = 0;
                            lVar.f394b = 0;
                        } else {
                            lVar.f394b = 2;
                        }
                    } else if (i18 != 2) {
                        i6 = i14;
                        if (i18 != 3) {
                            if (i18 != 4) {
                                throw new IllegalStateException();
                            }
                            if (i15 == 179 || i15 == 181) {
                                lVar.f395c -= i17;
                                lVar.a = false;
                                qc.v vVar2 = this.f413i;
                                int i19 = lVar.f396d;
                                String str = this.f412h;
                                str.getClass();
                                byte[] copyOf = Arrays.copyOf(lVar.f397e, lVar.f395c);
                                ke.v vVar3 = new ke.v(copyOf, copyOf.length);
                                vVar3.t(i19);
                                vVar3.t(4);
                                vVar3.r();
                                vVar3.s(8);
                                if (vVar3.h()) {
                                    vVar3.s(4);
                                    vVar3.s(3);
                                }
                                int i20 = vVar3.i(4);
                                if (i20 == 15) {
                                    int i21 = vVar3.i(8);
                                    int i22 = vVar3.i(8);
                                    if (i22 == 0) {
                                        ke.b.N("H263Reader", "Invalid aspect ratio");
                                        f2 = 1.0f;
                                        if (vVar3.h()) {
                                            vVar3.s(2);
                                            vVar3.s(1);
                                            if (vVar3.h()) {
                                                vVar3.s(15);
                                                vVar3.r();
                                                vVar3.s(15);
                                                vVar3.r();
                                                vVar3.s(15);
                                                vVar3.r();
                                                vVar3.s(3);
                                                vVar3.s(11);
                                                vVar3.r();
                                                vVar3.s(15);
                                                vVar3.r();
                                            }
                                        }
                                        if (vVar3.i(2) != 0) {
                                            ke.b.N("H263Reader", "Unhandled video object layer shape");
                                        }
                                        vVar3.r();
                                        int i23 = vVar3.i(16);
                                        vVar3.r();
                                        if (vVar3.h()) {
                                            if (i23 == 0) {
                                                ke.b.N("H263Reader", "Invalid vop_increment_time_resolution");
                                            } else {
                                                int i24 = 0;
                                                for (int i25 = i23 - 1; i25 > 0; i25 >>= 1) {
                                                    i24++;
                                                }
                                                vVar3.s(i24);
                                            }
                                        }
                                        vVar3.r();
                                        int i26 = vVar3.i(13);
                                        vVar3.r();
                                        int i27 = vVar3.i(13);
                                        vVar3.r();
                                        vVar3.r();
                                        hc.f0 f0Var = new hc.f0();
                                        f0Var.a = str;
                                        f0Var.k = "video/mp4v-es";
                                        f0Var.f9682p = i26;
                                        f0Var.f9683q = i27;
                                        f0Var.f9686t = f2;
                                        f0Var.f9679m = Collections.singletonList(copyOf);
                                        vVar2.e(new Format(f0Var));
                                        this.j = true;
                                    } else {
                                        f2 = i21 / i22;
                                        if (vVar3.h()) {
                                        }
                                        if (vVar3.i(2) != 0) {
                                        }
                                        vVar3.r();
                                        int i232 = vVar3.i(16);
                                        vVar3.r();
                                        if (vVar3.h()) {
                                        }
                                        vVar3.r();
                                        int i262 = vVar3.i(13);
                                        vVar3.r();
                                        int i272 = vVar3.i(13);
                                        vVar3.r();
                                        vVar3.r();
                                        hc.f0 f0Var2 = new hc.f0();
                                        f0Var2.a = str;
                                        f0Var2.k = "video/mp4v-es";
                                        f0Var2.f9682p = i262;
                                        f0Var2.f9683q = i272;
                                        f0Var2.f9686t = f2;
                                        f0Var2.f9679m = Collections.singletonList(copyOf);
                                        vVar2.e(new Format(f0Var2));
                                        this.j = true;
                                    }
                                } else if (i20 < 7) {
                                    f2 = f405l[i20];
                                    if (vVar3.h()) {
                                    }
                                    if (vVar3.i(2) != 0) {
                                    }
                                    vVar3.r();
                                    int i2322 = vVar3.i(16);
                                    vVar3.r();
                                    if (vVar3.h()) {
                                    }
                                    vVar3.r();
                                    int i2622 = vVar3.i(13);
                                    vVar3.r();
                                    int i2722 = vVar3.i(13);
                                    vVar3.r();
                                    vVar3.r();
                                    hc.f0 f0Var22 = new hc.f0();
                                    f0Var22.a = str;
                                    f0Var22.k = "video/mp4v-es";
                                    f0Var22.f9682p = i2622;
                                    f0Var22.f9683q = i2722;
                                    f0Var22.f9686t = f2;
                                    f0Var22.f9679m = Collections.singletonList(copyOf);
                                    vVar2.e(new Format(f0Var22));
                                    this.j = true;
                                } else {
                                    ke.b.N("H263Reader", "Invalid aspect ratio");
                                    f2 = 1.0f;
                                    if (vVar3.h()) {
                                    }
                                    if (vVar3.i(2) != 0) {
                                    }
                                    vVar3.r();
                                    int i23222 = vVar3.i(16);
                                    vVar3.r();
                                    if (vVar3.h()) {
                                    }
                                    vVar3.r();
                                    int i26222 = vVar3.i(13);
                                    vVar3.r();
                                    int i27222 = vVar3.i(13);
                                    vVar3.r();
                                    vVar3.r();
                                    hc.f0 f0Var222 = new hc.f0();
                                    f0Var222.a = str;
                                    f0Var222.k = "video/mp4v-es";
                                    f0Var222.f9682p = i26222;
                                    f0Var222.f9683q = i27222;
                                    f0Var222.f9686t = f2;
                                    f0Var222.f9679m = Collections.singletonList(copyOf);
                                    vVar2.e(new Format(f0Var222));
                                    this.j = true;
                                }
                            } else {
                                i11 = 0;
                            }
                        } else if ((b10 & 240) != 32) {
                            ke.b.N("H263Reader", "Unexpected start code value");
                            i11 = 0;
                            lVar.a = false;
                            lVar.f395c = 0;
                            lVar.f394b = 0;
                        } else {
                            i11 = 0;
                            lVar.f396d = lVar.f395c;
                            lVar.f394b = 4;
                        }
                    } else {
                        i6 = i14;
                        i11 = 0;
                        if (i15 > 31) {
                            ke.b.N("H263Reader", "Unexpected start code value");
                            lVar.a = false;
                            lVar.f395c = 0;
                            lVar.f394b = 0;
                        } else {
                            lVar.f394b = 3;
                        }
                    }
                } else {
                    i5 = i13;
                    i6 = i14;
                    i11 = 0;
                    if (i15 == 176) {
                        lVar.f394b = 1;
                        lVar.a = true;
                    }
                }
                lVar.a(l.f393f, i11, 3);
            }
            this.f410f.a(bArr, i12, u5);
            if (vVar != null) {
                if (i16 > 0) {
                    vVar.a(bArr, i12, u5);
                    i10 = 0;
                } else {
                    i10 = -i16;
                }
                if (vVar.b(i10)) {
                    int M = ke.b.M(vVar.f504d, vVar.f505e);
                    int i28 = ke.d0.a;
                    byte[] bArr2 = vVar.f504d;
                    ke.w wVar2 = this.f406b;
                    wVar2.D(bArr2, M);
                    this.a.f(this.k, wVar2);
                }
                if (i15 == 178) {
                    z5 = true;
                    if (wVar.a[u5 + 2] == 1) {
                        vVar.d(i15);
                    }
                    int i29 = i5 - u5;
                    long j5 = this.f411g - i29;
                    mVar = this.f410f;
                    boolean z6 = this.j;
                    if (mVar.f401e == 182 && z6 && mVar.f398b) {
                        j = mVar.f404h;
                        if (j != -9223372036854775807L) {
                            mVar.a.b(j, mVar.f400d ? 1 : 0, (int) (j5 - mVar.f403g), i29, null);
                        }
                    }
                    if (mVar.f401e != 179) {
                        mVar.f403g = j5;
                    }
                    m mVar2 = this.f410f;
                    long j7 = this.k;
                    mVar2.f401e = i15;
                    mVar2.f400d = false;
                    mVar2.f398b = (i15 != 182 || i15 == 179) ? z5 : false;
                    mVar2.f399c = i15 != 182 ? z5 : false;
                    mVar2.f402f = 0;
                    mVar2.f404h = j7;
                    i13 = i5;
                    i12 = i6;
                }
            }
            z5 = true;
            int i292 = i5 - u5;
            long j52 = this.f411g - i292;
            mVar = this.f410f;
            boolean z62 = this.j;
            if (mVar.f401e == 182) {
                j = mVar.f404h;
                if (j != -9223372036854775807L) {
                }
            }
            if (mVar.f401e != 179) {
            }
            m mVar22 = this.f410f;
            long j72 = this.k;
            mVar22.f401e = i15;
            mVar22.f400d = false;
            mVar22.f398b = (i15 != 182 || i15 == 179) ? z5 : false;
            mVar22.f399c = i15 != 182 ? z5 : false;
            mVar22.f402f = 0;
            mVar22.f404h = j72;
            i13 = i5;
            i12 = i6;
        }
    }

    @Override // ad.i
    public final void d(qc.l lVar, g0 g0Var) {
        g0Var.a();
        g0Var.b();
        this.f412h = g0Var.f368e;
        g0Var.b();
        qc.v y5 = lVar.y(g0Var.f367d, 2);
        this.f413i = y5;
        this.f410f = new m(y5);
        this.a.h(lVar, g0Var);
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
