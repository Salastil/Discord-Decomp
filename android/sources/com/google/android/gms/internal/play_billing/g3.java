package com.google.android.gms.internal.play_billing;

import java.util.Arrays;

/* loaded from: classes3.dex */
public final class g3 {

    /* renamed from: f, reason: collision with root package name */
    public static final g3 f5740f = new g3(0, new int[0], new Object[0], false);
    public int a;

    /* renamed from: b, reason: collision with root package name */
    public int[] f5741b;

    /* renamed from: c, reason: collision with root package name */
    public Object[] f5742c;

    /* renamed from: d, reason: collision with root package name */
    public int f5743d = -1;

    /* renamed from: e, reason: collision with root package name */
    public boolean f5744e;

    public g3(int i5, int[] iArr, Object[] objArr, boolean z5) {
        this.a = i5;
        this.f5741b = iArr;
        this.f5742c = objArr;
        this.f5744e = z5;
    }

    public static g3 b() {
        return new g3(0, new int[8], new Object[8], true);
    }

    public final int a() {
        int S;
        int T;
        int S2;
        int i5 = this.f5743d;
        if (i5 != -1) {
            return i5;
        }
        int i6 = 0;
        for (int i10 = 0; i10 < this.a; i10++) {
            int i11 = this.f5741b[i10];
            int i12 = i11 >>> 3;
            int i13 = i11 & 7;
            if (i13 != 0) {
                if (i13 == 1) {
                    ((Long) this.f5742c[i10]).getClass();
                    S2 = w1.S(i12 << 3) + 8;
                } else if (i13 == 2) {
                    int i14 = i12 << 3;
                    u1 u1Var = (u1) this.f5742c[i10];
                    int S3 = w1.S(i14);
                    int d6 = u1Var.d();
                    i6 = com.discord.chat.bridge.botuikit.a.e(d6, d6, S3, i6);
                } else if (i13 == 3) {
                    int S4 = w1.S(i12 << 3);
                    S = S4 + S4;
                    T = ((g3) this.f5742c[i10]).a();
                } else {
                    if (i13 != 5) {
                        throw new IllegalStateException(new m2());
                    }
                    ((Integer) this.f5742c[i10]).getClass();
                    S2 = w1.S(i12 << 3) + 4;
                }
                i6 = S2 + i6;
            } else {
                int i15 = i12 << 3;
                long longValue = ((Long) this.f5742c[i10]).longValue();
                S = w1.S(i15);
                T = w1.T(longValue);
            }
            i6 = T + S + i6;
        }
        this.f5743d = i6;
        return i6;
    }

    public final void c(int i5, Object obj) {
        if (!this.f5744e) {
            throw new UnsupportedOperationException();
        }
        e(this.a + 1);
        int[] iArr = this.f5741b;
        int i6 = this.a;
        iArr[i6] = i5;
        this.f5742c[i6] = obj;
        this.a = i6 + 1;
    }

    public final void d(x1 x1Var) {
        w1 w1Var = x1Var.a;
        if (this.a != 0) {
            for (int i5 = 0; i5 < this.a; i5++) {
                int i6 = this.f5741b[i5];
                Object obj = this.f5742c[i5];
                int i10 = i6 >>> 3;
                int i11 = i6 & 7;
                if (i11 == 0) {
                    w1Var.Q(i10, ((Long) obj).longValue());
                } else if (i11 == 1) {
                    w1Var.I(i10, ((Long) obj).longValue());
                } else if (i11 == 2) {
                    u1 u1Var = (u1) obj;
                    w1Var.P((i10 << 3) | 2);
                    w1Var.P(u1Var.d());
                    u1Var.i(w1Var);
                } else if (i11 == 3) {
                    w1Var.N(i10, 3);
                    ((g3) obj).d(x1Var);
                    w1Var.N(i10, 4);
                } else {
                    if (i11 != 5) {
                        throw new RuntimeException(new m2());
                    }
                    w1Var.G(i10, ((Integer) obj).intValue());
                }
            }
        }
    }

    public final void e(int i5) {
        int[] iArr = this.f5741b;
        if (i5 > iArr.length) {
            int i6 = this.a;
            int i10 = (i6 / 2) + i6;
            if (i10 >= i5) {
                i5 = i10;
            }
            if (i5 < 8) {
                i5 = 8;
            }
            this.f5741b = Arrays.copyOf(iArr, i5);
            this.f5742c = Arrays.copyOf(this.f5742c, i5);
        }
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj == null || !(obj instanceof g3)) {
            return false;
        }
        g3 g3Var = (g3) obj;
        int i5 = this.a;
        if (i5 == g3Var.a) {
            int[] iArr = this.f5741b;
            int[] iArr2 = g3Var.f5741b;
            int i6 = 0;
            while (true) {
                if (i6 >= i5) {
                    Object[] objArr = this.f5742c;
                    Object[] objArr2 = g3Var.f5742c;
                    int i10 = this.a;
                    for (int i11 = 0; i11 < i10; i11++) {
                        if (objArr[i11].equals(objArr2[i11])) {
                        }
                    }
                    return true;
                }
                if (iArr[i6] != iArr2[i6]) {
                    break;
                }
                i6++;
            }
        }
        return false;
    }

    public final int hashCode() {
        int i5 = this.a;
        int i6 = i5 + 527;
        int[] iArr = this.f5741b;
        int i10 = 17;
        int i11 = 17;
        for (int i12 = 0; i12 < i5; i12++) {
            i11 = (i11 * 31) + iArr[i12];
        }
        int i13 = ((i6 * 31) + i11) * 31;
        Object[] objArr = this.f5742c;
        int i14 = this.a;
        for (int i15 = 0; i15 < i14; i15++) {
            i10 = (i10 * 31) + objArr[i15].hashCode();
        }
        return i13 + i10;
    }
}
