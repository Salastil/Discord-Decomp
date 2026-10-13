package ad;

import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import com.google.android.exoplayer2.Format;

/* loaded from: classes3.dex */
public final class b implements i {
    public final /* synthetic */ int a;

    /* renamed from: b, reason: collision with root package name */
    public final ke.v f291b;

    /* renamed from: c, reason: collision with root package name */
    public final ke.w f292c;

    /* renamed from: d, reason: collision with root package name */
    public final String f293d;

    /* renamed from: e, reason: collision with root package name */
    public String f294e;

    /* renamed from: f, reason: collision with root package name */
    public qc.v f295f;

    /* renamed from: g, reason: collision with root package name */
    public int f296g;

    /* renamed from: h, reason: collision with root package name */
    public int f297h;

    /* renamed from: i, reason: collision with root package name */
    public boolean f298i;
    public long j;
    public Format k;

    /* renamed from: l, reason: collision with root package name */
    public int f299l;

    /* renamed from: m, reason: collision with root package name */
    public long f300m;

    public b(String str, int i5) {
        this.a = i5;
        switch (i5) {
            case 1:
                ke.v vVar = new ke.v(new byte[16], 16);
                this.f291b = vVar;
                this.f292c = new ke.w(vVar.f13356b);
                this.f296g = 0;
                this.f297h = 0;
                this.f298i = false;
                this.f300m = -9223372036854775807L;
                this.f293d = str;
                break;
            default:
                ke.v vVar2 = new ke.v(new byte[IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT], IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT);
                this.f291b = vVar2;
                this.f292c = new ke.w(vVar2.f13356b);
                this.f296g = 0;
                this.f300m = -9223372036854775807L;
                this.f293d = str;
                break;
        }
    }

    @Override // ad.i
    public final void a() {
        switch (this.a) {
            case 0:
                this.f296g = 0;
                this.f297h = 0;
                this.f298i = false;
                this.f300m = -9223372036854775807L;
                break;
            default:
                this.f296g = 0;
                this.f297h = 0;
                this.f298i = false;
                this.f300m = -9223372036854775807L;
                break;
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:184:0x0367  */
    /* JADX WARN: Removed duplicated region for block: B:235:0x0398  */
    @Override // ad.i
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void c(ke.w wVar) {
        int i5;
        int i6;
        int i10;
        int i11;
        int i12;
        int i13;
        String str;
        int i14;
        int i15;
        int i16;
        int i17;
        int i18;
        int i19;
        int i20;
        int i21;
        int i22;
        int i23;
        int i24;
        switch (this.a) {
            case 0:
                ke.b.l(this.f295f);
                while (wVar.a() > 0) {
                    int i25 = this.f296g;
                    ke.w wVar2 = this.f292c;
                    if (i25 == 0) {
                        while (true) {
                            if (wVar.a() <= 0) {
                                break;
                            }
                            if (this.f298i) {
                                int u5 = wVar.u();
                                if (u5 == 119) {
                                    this.f298i = false;
                                    this.f296g = 1;
                                    byte[] bArr = wVar2.a;
                                    bArr[0] = 11;
                                    bArr[1] = 119;
                                    this.f297h = 2;
                                } else {
                                    this.f298i = u5 == 11;
                                }
                            } else {
                                this.f298i = wVar.u() == 11;
                            }
                        }
                    } else if (i25 == 1) {
                        byte[] bArr2 = wVar2.a;
                        int min = Math.min(wVar.a(), 128 - this.f297h);
                        wVar.e(bArr2, this.f297h, min);
                        int i26 = this.f297h + min;
                        this.f297h = i26;
                        if (i26 == 128) {
                            ke.v vVar = this.f291b;
                            vVar.p(0);
                            int[] iArr = jc.a.f12497f;
                            int[] iArr2 = jc.a.f12495d;
                            int g6 = vVar.g();
                            vVar.s(40);
                            Object[] objArr = vVar.i(5) > 10;
                            vVar.p(g6);
                            if (objArr == true) {
                                vVar.s(16);
                                int i27 = vVar.i(2);
                                char c6 = i27 != 0 ? i27 != 1 ? i27 != 2 ? (char) 65535 : (char) 2 : (char) 1 : (char) 0;
                                vVar.s(3);
                                i11 = (vVar.i(11) + 1) * 2;
                                int i28 = vVar.i(2);
                                if (i28 == 3) {
                                    i12 = jc.a.f12496e[vVar.i(2)];
                                    i14 = 3;
                                    i15 = 6;
                                } else {
                                    int i29 = vVar.i(2);
                                    int i30 = jc.a.f12494c[i29];
                                    i12 = iArr2[i28];
                                    i14 = i29;
                                    i15 = i30;
                                }
                                i13 = i15 * IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER;
                                int i31 = (i11 * i12) / (i15 * 32);
                                int i32 = vVar.i(3);
                                boolean h6 = vVar.h();
                                i10 = iArr[i32] + (h6 ? 1 : 0);
                                vVar.s(10);
                                if (vVar.h()) {
                                    vVar.s(8);
                                }
                                if (i32 == 0) {
                                    vVar.s(5);
                                    if (vVar.h()) {
                                        vVar.s(8);
                                    }
                                }
                                if (c6 == 1 && vVar.h()) {
                                    vVar.s(16);
                                }
                                if (vVar.h()) {
                                    if (i32 > 2) {
                                        vVar.s(2);
                                    }
                                    if ((i32 & 1) == 0 || i32 <= 2) {
                                        i20 = 6;
                                    } else {
                                        i20 = 6;
                                        vVar.s(6);
                                    }
                                    if ((i32 & 4) != 0) {
                                        vVar.s(i20);
                                    }
                                    if (h6 && vVar.h()) {
                                        vVar.s(5);
                                    }
                                    if (c6 == 0) {
                                        if (vVar.h()) {
                                            i21 = 6;
                                            vVar.s(6);
                                        } else {
                                            i21 = 6;
                                        }
                                        if (i32 == 0 && vVar.h()) {
                                            vVar.s(i21);
                                        }
                                        if (vVar.h()) {
                                            vVar.s(i21);
                                        }
                                        int i33 = vVar.i(2);
                                        if (i33 == 1) {
                                            vVar.s(5);
                                            i23 = 2;
                                        } else {
                                            if (i33 == 2) {
                                                vVar.s(12);
                                            } else if (i33 == 3) {
                                                int i34 = vVar.i(5);
                                                if (vVar.h()) {
                                                    vVar.s(5);
                                                    if (vVar.h()) {
                                                        i24 = 4;
                                                        vVar.s(4);
                                                    } else {
                                                        i24 = 4;
                                                    }
                                                    if (vVar.h()) {
                                                        vVar.s(i24);
                                                    }
                                                    if (vVar.h()) {
                                                        vVar.s(i24);
                                                    }
                                                    if (vVar.h()) {
                                                        vVar.s(i24);
                                                    }
                                                    if (vVar.h()) {
                                                        vVar.s(i24);
                                                    }
                                                    if (vVar.h()) {
                                                        vVar.s(i24);
                                                    }
                                                    if (vVar.h()) {
                                                        vVar.s(i24);
                                                    }
                                                    if (vVar.h()) {
                                                        if (vVar.h()) {
                                                            vVar.s(i24);
                                                        }
                                                        if (vVar.h()) {
                                                            vVar.s(i24);
                                                        }
                                                    }
                                                }
                                                if (vVar.h()) {
                                                    vVar.s(5);
                                                    if (vVar.h()) {
                                                        vVar.s(7);
                                                        if (vVar.h()) {
                                                            i22 = 8;
                                                            vVar.s(8);
                                                            i23 = 2;
                                                            vVar.s((i34 + 2) * i22);
                                                            vVar.c();
                                                        }
                                                    }
                                                }
                                                i22 = 8;
                                                i23 = 2;
                                                vVar.s((i34 + 2) * i22);
                                                vVar.c();
                                            }
                                            i23 = 2;
                                        }
                                        if (i32 < i23) {
                                            if (vVar.h()) {
                                                vVar.s(14);
                                            }
                                            if (i32 == 0 && vVar.h()) {
                                                vVar.s(14);
                                            }
                                        }
                                        if (vVar.h()) {
                                            i16 = i14;
                                            if (i16 == 0) {
                                                vVar.s(5);
                                            } else {
                                                for (int i35 = 0; i35 < i15; i35++) {
                                                    if (vVar.h()) {
                                                        vVar.s(5);
                                                    }
                                                }
                                            }
                                            if (vVar.h()) {
                                                i17 = 3;
                                            } else {
                                                vVar.s(5);
                                                if (i32 == 2) {
                                                    vVar.s(4);
                                                }
                                                if (i32 >= 6) {
                                                    vVar.s(2);
                                                }
                                                if (vVar.h()) {
                                                    i19 = 8;
                                                    vVar.s(8);
                                                } else {
                                                    i19 = 8;
                                                }
                                                if (i32 == 0 && vVar.h()) {
                                                    vVar.s(i19);
                                                }
                                                i17 = 3;
                                                if (i28 < 3) {
                                                    vVar.r();
                                                }
                                            }
                                            if (c6 == 0 && i16 != i17) {
                                                vVar.r();
                                            }
                                            if (c6 == 2 || !(i16 == i17 || vVar.h())) {
                                                i18 = 6;
                                            } else {
                                                i18 = 6;
                                                vVar.s(6);
                                            }
                                            str = (!vVar.h() && vVar.i(i18) == 1 && vVar.i(8) == 1) ? "audio/eac3-joc" : "audio/eac3";
                                            i5 = i31;
                                        }
                                    }
                                }
                                i16 = i14;
                                if (vVar.h()) {
                                }
                                if (c6 == 0) {
                                    vVar.r();
                                }
                                if (c6 == 2) {
                                }
                                i18 = 6;
                                if (!vVar.h()) {
                                }
                                i5 = i31;
                            } else {
                                vVar.s(32);
                                int i36 = vVar.i(2);
                                String str2 = i36 == 3 ? null : "audio/ac3";
                                int i37 = vVar.i(6);
                                i5 = jc.a.f12498g[i37 / 2] * 1000;
                                int c8 = jc.a.c(i36, i37);
                                vVar.s(8);
                                int i38 = vVar.i(3);
                                if ((i38 & 1) == 0 || i38 == 1) {
                                    i6 = 2;
                                } else {
                                    i6 = 2;
                                    vVar.s(2);
                                }
                                if ((i38 & 4) != 0) {
                                    vVar.s(i6);
                                }
                                if (i38 == i6) {
                                    vVar.s(i6);
                                }
                                int i39 = i36 < 3 ? iArr2[i36] : -1;
                                i10 = iArr[i38] + (vVar.h() ? 1 : 0);
                                i11 = c8;
                                i12 = i39;
                                i13 = 1536;
                                str = str2;
                            }
                            Format format = this.k;
                            if (format == null || i10 != format.V || i12 != format.W || !ke.d0.a(str, format.I)) {
                                hc.f0 f0Var = new hc.f0();
                                f0Var.a = this.f294e;
                                f0Var.k = str;
                                f0Var.f9690x = i10;
                                f0Var.f9691y = i12;
                                f0Var.f9671c = this.f293d;
                                f0Var.f9675g = i5;
                                if ("audio/ac3".equals(str)) {
                                    f0Var.f9674f = i5;
                                }
                                Format format2 = new Format(f0Var);
                                this.k = format2;
                                this.f295f.e(format2);
                            }
                            this.f299l = i11;
                            this.j = (i13 * 1000000) / this.k.W;
                            wVar2.F(0);
                            this.f295f.d(IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT, wVar2);
                            this.f296g = 2;
                        }
                    } else if (i25 == 2) {
                        int min2 = Math.min(wVar.a(), this.f299l - this.f297h);
                        this.f295f.d(min2, wVar);
                        int i40 = this.f297h + min2;
                        this.f297h = i40;
                        int i41 = this.f299l;
                        if (i40 == i41) {
                            long j = this.f300m;
                            if (j != -9223372036854775807L) {
                                this.f295f.b(j, 1, i41, 0, null);
                                this.f300m += this.j;
                            }
                            this.f296g = 0;
                        }
                    }
                }
                break;
            default:
                ke.b.l(this.f295f);
                while (wVar.a() > 0) {
                    int i42 = this.f296g;
                    ke.w wVar3 = this.f292c;
                    if (i42 == 0) {
                        while (wVar.a() > 0) {
                            if (this.f298i) {
                                int u6 = wVar.u();
                                this.f298i = u6 == 172;
                                if (u6 == 64 || u6 == 65) {
                                    Object[] objArr2 = u6 == 65;
                                    this.f296g = 1;
                                    byte[] bArr3 = wVar3.a;
                                    bArr3[0] = -84;
                                    bArr3[1] = (byte) (objArr2 == true ? 65 : 64);
                                    this.f297h = 2;
                                }
                            } else {
                                this.f298i = wVar.u() == 172;
                            }
                        }
                    } else if (i42 == 1) {
                        byte[] bArr4 = wVar3.a;
                        int min3 = Math.min(wVar.a(), 16 - this.f297h);
                        wVar.e(bArr4, this.f297h, min3);
                        int i43 = this.f297h + min3;
                        this.f297h = i43;
                        if (i43 == 16) {
                            ke.v vVar2 = this.f291b;
                            vVar2.p(0);
                            hc.l h7 = jc.a.h(vVar2);
                            int i44 = h7.a;
                            Format format3 = this.k;
                            if (format3 == null || 2 != format3.V || i44 != format3.W || !"audio/ac4".equals(format3.I)) {
                                hc.f0 f0Var2 = new hc.f0();
                                f0Var2.a = this.f294e;
                                f0Var2.k = "audio/ac4";
                                f0Var2.f9690x = 2;
                                f0Var2.f9691y = i44;
                                f0Var2.f9671c = this.f293d;
                                Format format4 = new Format(f0Var2);
                                this.k = format4;
                                this.f295f.e(format4);
                            }
                            this.f299l = h7.f9773b;
                            this.j = (h7.f9774c * 1000000) / this.k.W;
                            wVar3.F(0);
                            this.f295f.d(16, wVar3);
                            this.f296g = 2;
                        }
                    } else if (i42 == 2) {
                        int min4 = Math.min(wVar.a(), this.f299l - this.f297h);
                        this.f295f.d(min4, wVar);
                        int i45 = this.f297h + min4;
                        this.f297h = i45;
                        int i46 = this.f299l;
                        if (i45 == i46) {
                            long j5 = this.f300m;
                            if (j5 != -9223372036854775807L) {
                                this.f295f.b(j5, 1, i46, 0, null);
                                this.f300m += this.j;
                            }
                            this.f296g = 0;
                        }
                    }
                }
                break;
        }
    }

    @Override // ad.i
    public final void d(qc.l lVar, g0 g0Var) {
        switch (this.a) {
            case 0:
                g0Var.a();
                g0Var.b();
                this.f294e = g0Var.f368e;
                g0Var.b();
                this.f295f = lVar.y(g0Var.f367d, 1);
                break;
            default:
                g0Var.a();
                g0Var.b();
                this.f294e = g0Var.f368e;
                g0Var.b();
                this.f295f = lVar.y(g0Var.f367d, 1);
                break;
        }
    }

    @Override // ad.i
    public final void e() {
        int i5 = this.a;
    }

    @Override // ad.i
    public final void f(int i5, long j) {
        switch (this.a) {
            case 0:
                if (j != -9223372036854775807L) {
                    this.f300m = j;
                    break;
                }
                break;
            default:
                if (j != -9223372036854775807L) {
                    this.f300m = j;
                    break;
                }
                break;
        }
    }

    private final void b() {
    }

    private final void g() {
    }
}
