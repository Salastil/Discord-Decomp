package ad;

import com.google.android.exoplayer2.Format;
import java.util.Arrays;

/* loaded from: classes3.dex */
public final class g implements i {

    /* renamed from: b, reason: collision with root package name */
    public final String f357b;

    /* renamed from: c, reason: collision with root package name */
    public String f358c;

    /* renamed from: d, reason: collision with root package name */
    public qc.v f359d;

    /* renamed from: f, reason: collision with root package name */
    public int f361f;

    /* renamed from: g, reason: collision with root package name */
    public int f362g;

    /* renamed from: h, reason: collision with root package name */
    public long f363h;

    /* renamed from: i, reason: collision with root package name */
    public Format f364i;
    public int j;
    public final ke.w a = new ke.w(new byte[18]);

    /* renamed from: e, reason: collision with root package name */
    public int f360e = 0;
    public long k = -9223372036854775807L;

    public g(String str) {
        this.f357b = str;
    }

    @Override // ad.i
    public final void a() {
        this.f360e = 0;
        this.f361f = 0;
        this.f362g = 0;
        this.k = -9223372036854775807L;
    }

    /* JADX WARN: Removed duplicated region for block: B:54:0x0233  */
    /* JADX WARN: Removed duplicated region for block: B:57:0x023b  */
    /* JADX WARN: Removed duplicated region for block: B:68:0x0275  */
    @Override // ad.i
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void c(ke.w wVar) {
        int i5;
        int i6;
        int i10;
        byte b10;
        int i11;
        int i12;
        int i13;
        int i14;
        byte b11;
        int i15;
        byte b12;
        int i16;
        ke.v vVar;
        ke.b.l(this.f359d);
        while (wVar.a() > 0) {
            int i17 = this.f360e;
            int i18 = 8;
            int i19 = 2;
            ke.w wVar2 = this.a;
            if (i17 == 0) {
                while (wVar.a() > 0) {
                    int i20 = this.f362g << 8;
                    this.f362g = i20;
                    int u5 = i20 | wVar.u();
                    this.f362g = u5;
                    if (u5 == 2147385345 || u5 == -25230976 || u5 == 536864768 || u5 == -14745368) {
                        byte[] bArr = wVar2.a;
                        bArr[0] = (byte) ((u5 >> 24) & 255);
                        bArr[1] = (byte) ((u5 >> 16) & 255);
                        bArr[2] = (byte) ((u5 >> 8) & 255);
                        bArr[3] = (byte) (u5 & 255);
                        this.f361f = 4;
                        this.f362g = 0;
                        this.f360e = 1;
                        break;
                    }
                }
            } else if (i17 == 1) {
                byte[] bArr2 = wVar2.a;
                int min = Math.min(wVar.a(), 18 - this.f361f);
                wVar.e(bArr2, this.f361f, min);
                int i21 = this.f361f + min;
                this.f361f = i21;
                if (i21 == 18) {
                    byte[] bArr3 = wVar2.a;
                    if (this.f364i == null) {
                        String str = this.f358c;
                        i6 = 0;
                        if (bArr3[0] == Byte.MAX_VALUE) {
                            vVar = new ke.v(bArr3, bArr3.length);
                            i5 = 8;
                            i16 = 2;
                        } else {
                            byte[] copyOf = Arrays.copyOf(bArr3, bArr3.length);
                            byte b13 = copyOf[0];
                            if (b13 == -2 || b13 == -1) {
                                for (int i22 = 0; i22 < copyOf.length - 1; i22 += 2) {
                                    byte b14 = copyOf[i22];
                                    int i23 = i22 + 1;
                                    copyOf[i22] = copyOf[i23];
                                    copyOf[i23] = b14;
                                }
                            }
                            ke.v vVar2 = new ke.v(copyOf, copyOf.length);
                            if (copyOf[0] == 31) {
                                ke.v vVar3 = new ke.v(copyOf, copyOf.length);
                                while (vVar3.b() >= 16) {
                                    vVar3.s(i19);
                                    int i24 = vVar3.i(14) & 16383;
                                    int min2 = Math.min(8 - vVar2.f13358d, 14);
                                    int i25 = i19;
                                    int i26 = vVar2.f13358d;
                                    int i27 = (8 - i26) - min2;
                                    byte[] bArr4 = vVar2.f13356b;
                                    int i28 = vVar2.f13357c;
                                    byte b15 = (byte) (bArr4[i28] & ((65280 >> i26) | ((1 << i27) - 1)));
                                    bArr4[i28] = b15;
                                    int i29 = 14 - min2;
                                    bArr4[i28] = (byte) (b15 | ((i24 >>> i29) << i27));
                                    int i30 = i28 + 1;
                                    while (i29 > i18) {
                                        vVar2.f13356b[i30] = (byte) (i24 >>> (i29 - 8));
                                        i29 -= 8;
                                        i30++;
                                        i18 = i18;
                                    }
                                    int i31 = i18;
                                    byte[] bArr5 = vVar2.f13356b;
                                    byte b16 = (byte) (bArr5[i30] & ((1 << r4) - 1));
                                    bArr5[i30] = b16;
                                    bArr5[i30] = (byte) (((i24 & ((1 << i29) - 1)) << (8 - i29)) | b16);
                                    vVar2.s(14);
                                    vVar2.a();
                                    i19 = i25;
                                    i18 = i31;
                                }
                            }
                            i5 = i18;
                            i16 = i19;
                            vVar2.o(copyOf, copyOf.length);
                            vVar = vVar2;
                        }
                        vVar.s(60);
                        int i32 = jc.a.j[vVar.i(6)];
                        int i33 = jc.a.k[vVar.i(4)];
                        int i34 = vVar.i(5);
                        int i35 = i34 >= 29 ? -1 : (jc.a.f12501l[i34] * 1000) / 2;
                        vVar.s(10);
                        int i36 = i32 + (vVar.i(i16) > 0 ? 1 : 0);
                        hc.f0 f0Var = new hc.f0();
                        f0Var.a = str;
                        f0Var.k = "audio/vnd.dts";
                        f0Var.f9674f = i35;
                        f0Var.f9690x = i36;
                        f0Var.f9691y = i33;
                        f0Var.f9680n = null;
                        f0Var.f9671c = this.f357b;
                        Format format = new Format(f0Var);
                        this.f364i = format;
                        this.f359d.e(format);
                    } else {
                        i5 = 8;
                        i6 = 0;
                    }
                    byte b17 = bArr3[i6];
                    if (b17 != -2) {
                        if (b17 == -1) {
                            i15 = ((bArr3[7] & 3) << 12) | ((bArr3[6] & 255) << 4);
                            b12 = bArr3[9];
                        } else if (b17 != 31) {
                            i10 = ((bArr3[5] & 3) << 12) | ((bArr3[6] & 255) << 4);
                            b10 = bArr3[7];
                        } else {
                            i15 = ((bArr3[6] & 3) << 12) | ((bArr3[7] & 255) << 4);
                            b12 = bArr3[i5];
                        }
                        i12 = (i15 | ((b12 & 60) >> 2)) + 1;
                        i11 = 1;
                        if (i11 != 0) {
                            i12 = (i12 * 16) / 14;
                        }
                        this.j = i12;
                        if (b17 == -2) {
                            if (b17 == -1) {
                                i13 = (bArr3[4] & 7) << 4;
                                b11 = bArr3[7];
                            } else if (b17 != 31) {
                                i13 = (bArr3[4] & 1) << 6;
                                i14 = bArr3[5] & 252;
                            } else {
                                i13 = (bArr3[5] & 7) << 4;
                                b11 = bArr3[6];
                            }
                            i14 = b11 & 60;
                        } else {
                            i13 = (bArr3[5] & 1) << 6;
                            i14 = bArr3[4] & 252;
                        }
                        this.f363h = (int) ((((((i14 >> 2) | i13) + 1) * 32) * 1000000) / this.f364i.W);
                        wVar2.F(i6);
                        this.f359d.d(18, wVar2);
                        this.f360e = 2;
                    } else {
                        i10 = ((bArr3[4] & 3) << 12) | ((bArr3[7] & 255) << 4);
                        b10 = bArr3[6];
                    }
                    i12 = (i10 | ((b10 & 240) >> 4)) + 1;
                    i11 = i6;
                    if (i11 != 0) {
                    }
                    this.j = i12;
                    if (b17 == -2) {
                    }
                    this.f363h = (int) ((((((i14 >> 2) | i13) + 1) * 32) * 1000000) / this.f364i.W);
                    wVar2.F(i6);
                    this.f359d.d(18, wVar2);
                    this.f360e = 2;
                }
            } else {
                if (i17 != 2) {
                    throw new IllegalStateException();
                }
                int min3 = Math.min(wVar.a(), this.j - this.f361f);
                this.f359d.d(min3, wVar);
                int i37 = this.f361f + min3;
                this.f361f = i37;
                int i38 = this.j;
                if (i37 == i38) {
                    long j = this.k;
                    if (j != -9223372036854775807L) {
                        this.f359d.b(j, 1, i38, 0, null);
                        this.k += this.f363h;
                    }
                    this.f360e = 0;
                }
            }
        }
    }

    @Override // ad.i
    public final void d(qc.l lVar, g0 g0Var) {
        g0Var.a();
        g0Var.b();
        this.f358c = g0Var.f368e;
        g0Var.b();
        this.f359d = lVar.y(g0Var.f367d, 1);
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
