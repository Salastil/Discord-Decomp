package jc;

import com.facebook.react.common.assets.ReactFontManager;
import java.util.Arrays;

/* loaded from: classes3.dex */
public final class r0 {
    public final int a;

    /* renamed from: b, reason: collision with root package name */
    public final int f12619b;

    /* renamed from: c, reason: collision with root package name */
    public final float f12620c;

    /* renamed from: d, reason: collision with root package name */
    public final float f12621d;

    /* renamed from: e, reason: collision with root package name */
    public final float f12622e;

    /* renamed from: f, reason: collision with root package name */
    public final int f12623f;

    /* renamed from: g, reason: collision with root package name */
    public final int f12624g;

    /* renamed from: h, reason: collision with root package name */
    public final int f12625h;

    /* renamed from: i, reason: collision with root package name */
    public final short[] f12626i;
    public short[] j;
    public int k;

    /* renamed from: l, reason: collision with root package name */
    public short[] f12627l;

    /* renamed from: m, reason: collision with root package name */
    public int f12628m;

    /* renamed from: n, reason: collision with root package name */
    public short[] f12629n;

    /* renamed from: o, reason: collision with root package name */
    public int f12630o;

    /* renamed from: p, reason: collision with root package name */
    public int f12631p;

    /* renamed from: q, reason: collision with root package name */
    public int f12632q;

    /* renamed from: r, reason: collision with root package name */
    public int f12633r;

    /* renamed from: s, reason: collision with root package name */
    public int f12634s;

    /* renamed from: t, reason: collision with root package name */
    public int f12635t;

    /* renamed from: u, reason: collision with root package name */
    public int f12636u;

    /* renamed from: v, reason: collision with root package name */
    public int f12637v;

    public r0(int i5, int i6, float f2, float f10, int i10) {
        this.a = i5;
        this.f12619b = i6;
        this.f12620c = f2;
        this.f12621d = f10;
        this.f12622e = i5 / i10;
        this.f12623f = i5 / ReactFontManager.TypefaceStyle.NORMAL;
        int i11 = i5 / 65;
        this.f12624g = i11;
        int i12 = i11 * 2;
        this.f12625h = i12;
        this.f12626i = new short[i12];
        this.j = new short[i12 * i6];
        this.f12627l = new short[i12 * i6];
        this.f12629n = new short[i12 * i6];
    }

    public static void e(int i5, int i6, short[] sArr, int i10, short[] sArr2, int i11, short[] sArr3, int i12) {
        for (int i13 = 0; i13 < i6; i13++) {
            int i14 = (i10 * i6) + i13;
            int i15 = (i12 * i6) + i13;
            int i16 = (i11 * i6) + i13;
            for (int i17 = 0; i17 < i5; i17++) {
                sArr[i14] = (short) (((sArr3[i15] * i17) + ((i5 - i17) * sArr2[i16])) / i5);
                i14 += i6;
                i16 += i6;
                i15 += i6;
            }
        }
    }

    public final void a(short[] sArr, int i5, int i6) {
        short[] c6 = c(this.f12627l, this.f12628m, i6);
        this.f12627l = c6;
        int i10 = this.f12619b;
        System.arraycopy(sArr, i5 * i10, c6, this.f12628m * i10, i10 * i6);
        this.f12628m += i6;
    }

    public final void b(short[] sArr, int i5, int i6) {
        int i10 = this.f12625h / i6;
        int i11 = this.f12619b;
        int i12 = i6 * i11;
        int i13 = i5 * i11;
        for (int i14 = 0; i14 < i10; i14++) {
            int i15 = 0;
            for (int i16 = 0; i16 < i12; i16++) {
                i15 += sArr[(i14 * i12) + i13 + i16];
            }
            this.f12626i[i14] = (short) (i15 / i12);
        }
    }

    public final short[] c(short[] sArr, int i5, int i6) {
        int length = sArr.length;
        int i10 = this.f12619b;
        int i11 = length / i10;
        return i5 + i6 <= i11 ? sArr : Arrays.copyOf(sArr, (((i11 * 3) / 2) + i6) * i10);
    }

    public final int d(short[] sArr, int i5, int i6, int i10) {
        int i11 = i5 * this.f12619b;
        int i12 = 255;
        int i13 = 1;
        int i14 = 0;
        int i15 = 0;
        while (i6 <= i10) {
            int i16 = 0;
            for (int i17 = 0; i17 < i6; i17++) {
                i16 += Math.abs(sArr[i11 + i17] - sArr[(i11 + i6) + i17]);
            }
            if (i16 * i14 < i13 * i6) {
                i14 = i6;
                i13 = i16;
            }
            if (i16 * i12 > i15 * i6) {
                i12 = i6;
                i15 = i16;
            }
            i6++;
        }
        this.f12636u = i13 / i14;
        this.f12637v = i15 / i12;
        return i14;
    }

    public final void f() {
        float f2;
        float f10;
        float f11;
        double d6;
        int i5;
        int i6;
        int i10;
        int i11;
        int i12;
        int i13;
        int i14;
        int i15;
        int i16 = this.f12628m;
        float f12 = this.f12620c;
        float f13 = this.f12621d;
        float f14 = f12 / f13;
        float f15 = this.f12622e * f13;
        double d7 = f14;
        int i17 = this.a;
        int i18 = 1;
        int i19 = this.f12619b;
        if (d7 > 1.00001d || d7 < 0.99999d) {
            int i20 = this.k;
            int i21 = this.f12625h;
            if (i20 >= i21) {
                int i22 = 0;
                while (true) {
                    int i23 = this.f12633r;
                    if (i23 > 0) {
                        int min = Math.min(i21, i23);
                        a(this.j, i22, min);
                        this.f12633r -= min;
                        i22 += min;
                        f10 = f14;
                        f11 = f15;
                        d6 = d7;
                        f2 = 1.0f;
                    } else {
                        short[] sArr = this.j;
                        int i24 = i17 > 4000 ? i17 / 4000 : i18;
                        f2 = 1.0f;
                        int i25 = this.f12624g;
                        int i26 = this.f12623f;
                        if (i19 == i18 && i24 == i18) {
                            i5 = d(sArr, i22, i26, i25);
                            f10 = f14;
                            f11 = f15;
                            d6 = d7;
                        } else {
                            b(sArr, i22, i24);
                            f10 = f14;
                            f11 = f15;
                            short[] sArr2 = this.f12626i;
                            d6 = d7;
                            int d8 = d(sArr2, 0, i26 / i24, i25 / i24);
                            if (i24 != 1) {
                                int i27 = d8 * i24;
                                int i28 = i24 * 4;
                                int i29 = i27 - i28;
                                int i30 = i27 + i28;
                                if (i29 >= i26) {
                                    i26 = i29;
                                }
                                if (i30 <= i25) {
                                    i25 = i30;
                                }
                                if (i19 == 1) {
                                    i5 = d(sArr, i22, i26, i25);
                                } else {
                                    b(sArr, i22, 1);
                                    i5 = d(sArr2, 0, i26, i25);
                                }
                            } else {
                                i5 = d8;
                            }
                        }
                        int i31 = this.f12636u;
                        int i32 = this.f12637v;
                        if (i31 == 0 || (i6 = this.f12634s) == 0 || i32 > i31 * 3 || i31 * 2 <= this.f12635t * 3) {
                            i6 = i5;
                        }
                        this.f12635t = i31;
                        this.f12634s = i5;
                        if (d6 > 1.0d) {
                            short[] sArr3 = this.j;
                            if (f10 >= 2.0f) {
                                i11 = (int) (i6 / (f10 - 1.0f));
                            } else {
                                this.f12633r = (int) (((2.0f - f10) * i6) / (f10 - 1.0f));
                                i11 = i6;
                            }
                            short[] c6 = c(this.f12627l, this.f12628m, i11);
                            this.f12627l = c6;
                            int i33 = i22 + i6;
                            int i34 = i22;
                            int i35 = i11;
                            e(i35, this.f12619b, c6, this.f12628m, sArr3, i34, sArr3, i33);
                            this.f12628m += i35;
                            i22 = i6 + i35 + i34;
                        } else {
                            int i36 = i22;
                            short[] sArr4 = this.j;
                            if (f10 < 0.5f) {
                                i10 = (int) ((i6 * f10) / (1.0f - f10));
                            } else {
                                this.f12633r = (int) ((((2.0f * f10) - 1.0f) * i6) / (1.0f - f10));
                                i10 = i6;
                            }
                            int i37 = i6 + i10;
                            short[] c8 = c(this.f12627l, this.f12628m, i37);
                            this.f12627l = c8;
                            System.arraycopy(sArr4, i36 * i19, c8, this.f12628m * i19, i6 * i19);
                            e(i10, this.f12619b, this.f12627l, this.f12628m + i6, sArr4, i36 + i6, sArr4, i36);
                            this.f12628m += i37;
                            i22 = i36 + i10;
                        }
                    }
                    if (i22 + i21 > i20) {
                        break;
                    }
                    i18 = 1;
                    f14 = f10;
                    f15 = f11;
                    d7 = d6;
                }
                int i38 = this.k - i22;
                short[] sArr5 = this.j;
                System.arraycopy(sArr5, i22 * i19, sArr5, 0, i38 * i19);
                this.k = i38;
                if (f11 != f2 || this.f12628m == i16) {
                }
                int i39 = (int) (i17 / f11);
                while (true) {
                    if (i39 <= 16384 && i17 <= 16384) {
                        break;
                    }
                    i39 /= 2;
                    i17 /= 2;
                }
                int i40 = this.f12628m - i16;
                short[] c10 = c(this.f12629n, this.f12630o, i40);
                this.f12629n = c10;
                System.arraycopy(this.f12627l, i16 * i19, c10, this.f12630o * i19, i40 * i19);
                this.f12628m = i16;
                this.f12630o += i40;
                int i41 = 0;
                while (true) {
                    i12 = this.f12630o;
                    i13 = i12 - 1;
                    if (i41 >= i13) {
                        break;
                    }
                    while (true) {
                        i14 = this.f12631p + 1;
                        int i42 = i14 * i39;
                        i15 = this.f12632q;
                        if (i42 <= i15 * i17) {
                            break;
                        }
                        this.f12627l = c(this.f12627l, this.f12628m, 1);
                        for (int i43 = 0; i43 < i19; i43++) {
                            short[] sArr6 = this.f12627l;
                            int i44 = (this.f12628m * i19) + i43;
                            short[] sArr7 = this.f12629n;
                            int i45 = (i41 * i19) + i43;
                            short s2 = sArr7[i45];
                            short s5 = sArr7[i45 + i19];
                            int i46 = this.f12632q * i17;
                            int i47 = this.f12631p;
                            int i48 = i47 * i39;
                            int i49 = (i47 + 1) * i39;
                            int i50 = i49 - i46;
                            int i51 = i49 - i48;
                            sArr6[i44] = (short) ((((i51 - i50) * s5) + (s2 * i50)) / i51);
                        }
                        this.f12632q++;
                        this.f12628m++;
                    }
                    this.f12631p = i14;
                    if (i14 == i17) {
                        this.f12631p = 0;
                        ke.b.k(i15 == i39);
                        this.f12632q = 0;
                    }
                    i41++;
                }
                if (i13 == 0) {
                    return;
                }
                short[] sArr8 = this.f12629n;
                System.arraycopy(sArr8, i13 * i19, sArr8, 0, (i12 - i13) * i19);
                this.f12630o -= i13;
                return;
            }
        } else {
            a(this.j, 0, this.k);
            this.k = 0;
        }
        f11 = f15;
        f2 = 1.0f;
        if (f11 != f2) {
        }
    }
}
