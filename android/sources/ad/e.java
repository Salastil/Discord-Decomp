package ad;

import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import com.google.android.exoplayer2.Format;
import java.util.Arrays;
import java.util.Collections;
import jc.p0;

/* loaded from: classes3.dex */
public final class e implements i {

    /* renamed from: v, reason: collision with root package name */
    public static final byte[] f321v = {73, 68, 51};
    public final boolean a;

    /* renamed from: d, reason: collision with root package name */
    public final String f324d;

    /* renamed from: e, reason: collision with root package name */
    public String f325e;

    /* renamed from: f, reason: collision with root package name */
    public qc.v f326f;

    /* renamed from: g, reason: collision with root package name */
    public qc.v f327g;
    public boolean k;

    /* renamed from: l, reason: collision with root package name */
    public boolean f330l;

    /* renamed from: o, reason: collision with root package name */
    public int f333o;

    /* renamed from: p, reason: collision with root package name */
    public boolean f334p;

    /* renamed from: r, reason: collision with root package name */
    public int f336r;

    /* renamed from: t, reason: collision with root package name */
    public qc.v f338t;

    /* renamed from: u, reason: collision with root package name */
    public long f339u;

    /* renamed from: b, reason: collision with root package name */
    public final ke.v f322b = new ke.v(new byte[7], 7);

    /* renamed from: c, reason: collision with root package name */
    public final ke.w f323c = new ke.w(Arrays.copyOf(f321v, 10));

    /* renamed from: h, reason: collision with root package name */
    public int f328h = 0;

    /* renamed from: i, reason: collision with root package name */
    public int f329i = 0;
    public int j = IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER;

    /* renamed from: m, reason: collision with root package name */
    public int f331m = -1;

    /* renamed from: n, reason: collision with root package name */
    public int f332n = -1;

    /* renamed from: q, reason: collision with root package name */
    public long f335q = -9223372036854775807L;

    /* renamed from: s, reason: collision with root package name */
    public long f337s = -9223372036854775807L;

    public e(boolean z5, String str) {
        this.a = z5;
        this.f324d = str;
    }

    @Override // ad.i
    public final void a() {
        this.f337s = -9223372036854775807L;
        this.f330l = false;
        this.f328h = 0;
        this.f329i = 0;
        this.j = IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER;
    }

    @Override // ad.i
    public final void c(ke.w wVar) {
        int i5;
        int i6;
        byte b10;
        char c6;
        int i10;
        int i11;
        char c8;
        int i12;
        char c10;
        int i13;
        this.f326f.getClass();
        int i14 = ke.d0.a;
        while (wVar.a() > 0) {
            int i15 = this.f328h;
            char c11 = 65535;
            ke.w wVar2 = this.f323c;
            int i16 = 3;
            ke.v vVar = this.f322b;
            int i17 = 4;
            int i18 = 1;
            int i19 = 0;
            if (i15 == 0) {
                byte[] bArr = wVar.a;
                int i20 = wVar.f13363b;
                int i21 = wVar.f13364c;
                while (true) {
                    if (i20 >= i21) {
                        wVar.F(i20);
                        break;
                    }
                    i5 = i20 + 1;
                    i6 = i16;
                    b10 = bArr[i20];
                    int i22 = b10 & 255;
                    if (this.j != 512 || ((65280 | (((byte) i22) & 255)) & 65526) != 65520) {
                        c6 = c11;
                        i10 = i18;
                    } else {
                        if (this.f330l) {
                            break;
                        }
                        int i23 = i20 - 1;
                        wVar.F(i20);
                        byte[] bArr2 = vVar.f13356b;
                        if (wVar.a() >= i18) {
                            wVar.e(bArr2, i19, i18);
                            vVar.p(i17);
                            int i24 = vVar.i(i18);
                            int i25 = this.f331m;
                            if (i25 == -1 || i24 == i25) {
                                if (this.f332n != -1) {
                                    byte[] bArr3 = vVar.f13356b;
                                    if (wVar.a() < i18) {
                                        break;
                                    }
                                    wVar.e(bArr3, i19, i18);
                                    vVar.p(2);
                                    i13 = 4;
                                    if (vVar.i(4) == this.f332n) {
                                        wVar.F(i5);
                                    }
                                } else {
                                    i13 = 4;
                                }
                                byte[] bArr4 = vVar.f13356b;
                                if (wVar.a() >= i13) {
                                    wVar.e(bArr4, i19, i13);
                                    vVar.p(14);
                                    int i26 = vVar.i(13);
                                    if (i26 >= 7) {
                                        byte[] bArr5 = wVar.a;
                                        int i27 = wVar.f13364c;
                                        int i28 = i23 + i26;
                                        if (i28 < i27) {
                                            byte b11 = bArr5[i28];
                                            c6 = 65535;
                                            if (b11 != -1) {
                                                if (b11 == 73) {
                                                    int i29 = i28 + 1;
                                                    if (i29 != i27) {
                                                        if (bArr5[i29] == 68) {
                                                            int i30 = i28 + 2;
                                                            if (i30 != i27) {
                                                                if (bArr5[i30] == 51) {
                                                                    break;
                                                                }
                                                            } else {
                                                                break;
                                                            }
                                                        }
                                                    } else {
                                                        break;
                                                    }
                                                }
                                            } else {
                                                int i31 = i28 + 1;
                                                if (i31 != i27) {
                                                    byte b12 = bArr5[i31];
                                                    if (((65280 | (b12 & 255)) & 65526) == 65520 && ((b12 & 8) >> 3) == i24) {
                                                        break;
                                                    }
                                                } else {
                                                    break;
                                                }
                                            }
                                        } else {
                                            break;
                                        }
                                    }
                                } else {
                                    break;
                                }
                            } else {
                                c6 = 65535;
                            }
                            i10 = 1;
                        }
                        c6 = 65535;
                        i10 = 1;
                    }
                    int i32 = this.j;
                    int i33 = i22 | i32;
                    if (i33 == 329) {
                        i11 = 3;
                        c8 = 256;
                        i12 = 0;
                        c10 = 2;
                        this.j = 768;
                    } else if (i33 == 511) {
                        i11 = 3;
                        c8 = 256;
                        i12 = 0;
                        c10 = 2;
                        this.j = IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING;
                    } else if (i33 == 836) {
                        i11 = 3;
                        c8 = 256;
                        i12 = 0;
                        c10 = 2;
                        this.j = IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET;
                    } else {
                        if (i33 == 1075) {
                            this.f328h = 2;
                            this.f329i = 3;
                            this.f336r = 0;
                            wVar2.F(0);
                            wVar.F(i5);
                            break;
                        }
                        c8 = 256;
                        if (i32 != 256) {
                            this.j = IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER;
                            i11 = 3;
                            i12 = 0;
                            c10 = 2;
                            i18 = i10;
                            c11 = c6;
                            i17 = 4;
                            i19 = i12;
                            i16 = i11;
                        } else {
                            i11 = 3;
                            i12 = 0;
                            c10 = 2;
                        }
                    }
                    i20 = i5;
                    i18 = i10;
                    c11 = c6;
                    i17 = 4;
                    i19 = i12;
                    i16 = i11;
                }
                this.f333o = (b10 & 8) >> 3;
                this.k = (b10 & 1) == 0;
                if (this.f330l) {
                    this.f328h = i6;
                    this.f329i = 0;
                } else {
                    this.f328h = 1;
                    this.f329i = 0;
                }
                wVar.F(i5);
            } else if (i15 != 1) {
                if (i15 == 2) {
                    byte[] bArr6 = wVar2.a;
                    int min = Math.min(wVar.a(), 10 - this.f329i);
                    wVar.e(bArr6, this.f329i, min);
                    int i34 = this.f329i + min;
                    this.f329i = i34;
                    if (i34 == 10) {
                        this.f327g.d(10, wVar2);
                        wVar2.F(6);
                        qc.v vVar2 = this.f327g;
                        int t5 = wVar2.t() + 10;
                        this.f328h = 4;
                        this.f329i = 10;
                        this.f338t = vVar2;
                        this.f339u = 0L;
                        this.f336r = t5;
                    }
                } else if (i15 == 3) {
                    int i35 = this.k ? 7 : 5;
                    byte[] bArr7 = vVar.f13356b;
                    int min2 = Math.min(wVar.a(), i35 - this.f329i);
                    wVar.e(bArr7, this.f329i, min2);
                    int i36 = this.f329i + min2;
                    this.f329i = i36;
                    if (i36 == i35) {
                        vVar.p(0);
                        if (this.f334p) {
                            vVar.s(10);
                        } else {
                            int i37 = vVar.i(2) + 1;
                            if (i37 != 2) {
                                ke.b.N("AdtsReader", "Detected audio object type: " + i37 + ", but assuming AAC LC.");
                                i37 = 2;
                            }
                            vVar.s(5);
                            byte[] a = jc.a.a(i37, this.f332n, vVar.i(3));
                            p0 i38 = jc.a.i(new ke.v(a, 2), false);
                            hc.f0 f0Var = new hc.f0();
                            f0Var.a = this.f325e;
                            f0Var.k = "audio/mp4a-latm";
                            f0Var.f9676h = (String) i38.f12604c;
                            f0Var.f9690x = i38.f12603b;
                            f0Var.f9691y = i38.a;
                            f0Var.f9679m = Collections.singletonList(a);
                            f0Var.f9671c = this.f324d;
                            Format format = new Format(f0Var);
                            this.f335q = 1024000000 / format.W;
                            this.f326f.e(format);
                            this.f334p = true;
                        }
                        vVar.s(4);
                        int i39 = vVar.i(13);
                        int i40 = i39 - 7;
                        if (this.k) {
                            i40 = i39 - 9;
                        }
                        qc.v vVar3 = this.f326f;
                        long j = this.f335q;
                        this.f328h = 4;
                        this.f329i = 0;
                        this.f338t = vVar3;
                        this.f339u = j;
                        this.f336r = i40;
                    }
                } else {
                    if (i15 != 4) {
                        throw new IllegalStateException();
                    }
                    int min3 = Math.min(wVar.a(), this.f336r - this.f329i);
                    this.f338t.d(min3, wVar);
                    int i41 = this.f329i + min3;
                    this.f329i = i41;
                    int i42 = this.f336r;
                    if (i41 == i42) {
                        long j5 = this.f337s;
                        if (j5 != -9223372036854775807L) {
                            this.f338t.b(j5, 1, i42, 0, null);
                            this.f337s += this.f339u;
                        }
                        this.f328h = 0;
                        this.f329i = 0;
                        this.j = IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER;
                    }
                }
            } else if (wVar.a() != 0) {
                vVar.f13356b[0] = wVar.a[wVar.f13363b];
                vVar.p(2);
                int i43 = vVar.i(4);
                int i44 = this.f332n;
                if (i44 == -1 || i43 == i44) {
                    if (!this.f330l) {
                        this.f330l = true;
                        this.f331m = this.f333o;
                        this.f332n = i43;
                    }
                    this.f328h = 3;
                    this.f329i = 0;
                } else {
                    this.f330l = false;
                    this.f328h = 0;
                    this.f329i = 0;
                    this.j = IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER;
                }
            }
        }
    }

    @Override // ad.i
    public final void d(qc.l lVar, g0 g0Var) {
        g0Var.a();
        g0Var.b();
        this.f325e = g0Var.f368e;
        g0Var.b();
        qc.v y5 = lVar.y(g0Var.f367d, 1);
        this.f326f = y5;
        this.f338t = y5;
        if (!this.a) {
            this.f327g = new qc.i();
            return;
        }
        g0Var.a();
        g0Var.b();
        qc.v y6 = lVar.y(g0Var.f367d, 5);
        this.f327g = y6;
        hc.f0 f0Var = new hc.f0();
        g0Var.b();
        f0Var.a = g0Var.f368e;
        f0Var.k = "application/id3";
        y6.e(new Format(f0Var));
    }

    @Override // ad.i
    public final void f(int i5, long j) {
        if (j != -9223372036854775807L) {
            this.f337s = j;
        }
    }

    @Override // ad.i
    public final void e() {
    }
}
