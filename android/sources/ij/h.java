package ij;

import java.util.Arrays;
import kotlin.jvm.internal.ByteCompanionObject;

/* loaded from: classes3.dex */
public final class h extends j {

    /* renamed from: c, reason: collision with root package name */
    public final byte[] f10863c;

    /* renamed from: d, reason: collision with root package name */
    public int f10864d;

    /* renamed from: e, reason: collision with root package name */
    public int f10865e;

    /* renamed from: f, reason: collision with root package name */
    public int f10866f;

    /* renamed from: g, reason: collision with root package name */
    public final int f10867g;

    /* renamed from: h, reason: collision with root package name */
    public int f10868h;

    /* renamed from: i, reason: collision with root package name */
    public int f10869i = Integer.MAX_VALUE;

    public h(byte[] bArr, int i5, int i6, boolean z5) {
        this.f10863c = bArr;
        this.f10864d = i6 + i5;
        this.f10866f = i5;
        this.f10867g = i5;
    }

    public final int A() {
        int i5 = this.f10866f;
        if (this.f10864d - i5 < 4) {
            throw v.e();
        }
        this.f10866f = i5 + 4;
        byte[] bArr = this.f10863c;
        return ((bArr[i5 + 3] & 255) << 24) | (bArr[i5] & 255) | ((bArr[i5 + 1] & 255) << 8) | ((bArr[i5 + 2] & 255) << 16);
    }

    public final long B() {
        int i5 = this.f10866f;
        if (this.f10864d - i5 < 8) {
            throw v.e();
        }
        this.f10866f = i5 + 8;
        byte[] bArr = this.f10863c;
        return ((bArr[i5 + 7] & 255) << 56) | (bArr[i5] & 255) | ((bArr[i5 + 1] & 255) << 8) | ((bArr[i5 + 2] & 255) << 16) | ((bArr[i5 + 3] & 255) << 24) | ((bArr[i5 + 4] & 255) << 32) | ((bArr[i5 + 5] & 255) << 40) | ((bArr[i5 + 6] & 255) << 48);
    }

    public final int C() {
        int i5;
        int i6 = this.f10866f;
        int i10 = this.f10864d;
        if (i10 != i6) {
            int i11 = i6 + 1;
            byte[] bArr = this.f10863c;
            byte b10 = bArr[i6];
            if (b10 >= 0) {
                this.f10866f = i11;
                return b10;
            }
            if (i10 - i11 >= 9) {
                int i12 = i6 + 2;
                int i13 = (bArr[i11] << 7) ^ b10;
                if (i13 < 0) {
                    i5 = i13 ^ (-128);
                } else {
                    int i14 = i6 + 3;
                    int i15 = (bArr[i12] << 14) ^ i13;
                    if (i15 >= 0) {
                        i5 = i15 ^ 16256;
                    } else {
                        int i16 = i6 + 4;
                        int i17 = i15 ^ (bArr[i14] << 21);
                        if (i17 < 0) {
                            i5 = (-2080896) ^ i17;
                        } else {
                            i14 = i6 + 5;
                            byte b11 = bArr[i16];
                            int i18 = (i17 ^ (b11 << 28)) ^ 266354560;
                            if (b11 < 0) {
                                i16 = i6 + 6;
                                if (bArr[i14] < 0) {
                                    i14 = i6 + 7;
                                    if (bArr[i16] < 0) {
                                        i16 = i6 + 8;
                                        if (bArr[i14] < 0) {
                                            i14 = i6 + 9;
                                            if (bArr[i16] < 0) {
                                                int i19 = i6 + 10;
                                                if (bArr[i14] >= 0) {
                                                    i12 = i19;
                                                    i5 = i18;
                                                }
                                            }
                                        }
                                    }
                                }
                                i5 = i18;
                            }
                            i5 = i18;
                        }
                        i12 = i16;
                    }
                    i12 = i14;
                }
                this.f10866f = i12;
                return i5;
            }
        }
        return (int) E();
    }

    public final long D() {
        long j;
        long j5;
        long j7;
        long j10;
        int i5 = this.f10866f;
        int i6 = this.f10864d;
        if (i6 != i5) {
            int i10 = i5 + 1;
            byte[] bArr = this.f10863c;
            byte b10 = bArr[i5];
            if (b10 >= 0) {
                this.f10866f = i10;
                return b10;
            }
            if (i6 - i10 >= 9) {
                int i11 = i5 + 2;
                int i12 = (bArr[i10] << 7) ^ b10;
                if (i12 < 0) {
                    j = i12 ^ (-128);
                } else {
                    int i13 = i5 + 3;
                    int i14 = (bArr[i11] << 14) ^ i12;
                    if (i14 >= 0) {
                        j = i14 ^ 16256;
                        i11 = i13;
                    } else {
                        int i15 = i5 + 4;
                        int i16 = i14 ^ (bArr[i13] << 21);
                        if (i16 < 0) {
                            j10 = (-2080896) ^ i16;
                        } else {
                            long j11 = i16;
                            i11 = i5 + 5;
                            long j12 = j11 ^ (bArr[i15] << 28);
                            if (j12 >= 0) {
                                j7 = 266354560;
                            } else {
                                i15 = i5 + 6;
                                long j13 = j12 ^ (bArr[i11] << 35);
                                if (j13 < 0) {
                                    j5 = -34093383808L;
                                } else {
                                    i11 = i5 + 7;
                                    j12 = j13 ^ (bArr[i15] << 42);
                                    if (j12 >= 0) {
                                        j7 = 4363953127296L;
                                    } else {
                                        i15 = i5 + 8;
                                        j13 = j12 ^ (bArr[i11] << 49);
                                        if (j13 < 0) {
                                            j5 = -558586000294016L;
                                        } else {
                                            i11 = i5 + 9;
                                            long j14 = (j13 ^ (bArr[i15] << 56)) ^ 71499008037633920L;
                                            if (j14 < 0) {
                                                int i17 = i5 + 10;
                                                if (bArr[i11] >= 0) {
                                                    i11 = i17;
                                                }
                                            }
                                            j = j14;
                                        }
                                    }
                                }
                                j10 = j5 ^ j13;
                            }
                            j = j7 ^ j12;
                        }
                        i11 = i15;
                        j = j10;
                    }
                }
                this.f10866f = i11;
                return j;
            }
        }
        return E();
    }

    public final long E() {
        long j = 0;
        for (int i5 = 0; i5 < 64; i5 += 7) {
            int i6 = this.f10866f;
            if (i6 == this.f10864d) {
                throw v.e();
            }
            this.f10866f = i6 + 1;
            j |= (r3 & ByteCompanionObject.MAX_VALUE) << i5;
            if ((this.f10863c[i6] & ByteCompanionObject.MIN_VALUE) == 0) {
                return j;
            }
        }
        throw v.c();
    }

    public final void F() {
        int i5 = this.f10864d + this.f10865e;
        this.f10864d = i5;
        int i6 = i5 - this.f10867g;
        int i10 = this.f10869i;
        if (i6 <= i10) {
            this.f10865e = 0;
            return;
        }
        int i11 = i6 - i10;
        this.f10865e = i11;
        this.f10864d = i5 - i11;
    }

    public final void G(int i5) {
        if (i5 >= 0) {
            int i6 = this.f10864d;
            int i10 = this.f10866f;
            if (i5 <= i6 - i10) {
                this.f10866f = i10 + i5;
                return;
            }
        }
        if (i5 >= 0) {
            throw v.e();
        }
        throw v.d();
    }

    @Override // ij.j
    public final void a(int i5) {
        if (this.f10868h != i5) {
            throw new v("Protocol message end-group tag did not match expected tag.");
        }
    }

    @Override // ij.j
    public final int b() {
        return this.f10866f - this.f10867g;
    }

    @Override // ij.j
    public final boolean c() {
        return this.f10866f == this.f10864d;
    }

    @Override // ij.j
    public final void d(int i5) {
        this.f10869i = i5;
        F();
    }

    @Override // ij.j
    public final int e(int i5) {
        if (i5 < 0) {
            throw v.d();
        }
        int b10 = b() + i5;
        if (b10 < 0) {
            throw new v("Failed to parse the message.");
        }
        int i6 = this.f10869i;
        if (b10 > i6) {
            throw v.e();
        }
        this.f10869i = b10;
        F();
        return i6;
    }

    @Override // ij.j
    public final boolean f() {
        return D() != 0;
    }

    @Override // ij.j
    public final g g() {
        byte[] bArr;
        int C = C();
        byte[] bArr2 = this.f10863c;
        if (C > 0) {
            int i5 = this.f10864d;
            int i6 = this.f10866f;
            if (C <= i5 - i6) {
                g d6 = g.d(bArr2, i6, C);
                this.f10866f += C;
                return d6;
            }
        }
        if (C == 0) {
            return g.f10858i;
        }
        if (C > 0) {
            int i10 = this.f10864d;
            int i11 = this.f10866f;
            if (C <= i10 - i11) {
                int i12 = C + i11;
                this.f10866f = i12;
                bArr = Arrays.copyOfRange(bArr2, i11, i12);
                g gVar = g.f10858i;
                return new g(bArr);
            }
        }
        if (C > 0) {
            throw v.e();
        }
        if (C != 0) {
            throw v.d();
        }
        bArr = t.f10923b;
        g gVar2 = g.f10858i;
        return new g(bArr);
    }

    @Override // ij.j
    public final double h() {
        return Double.longBitsToDouble(B());
    }

    @Override // ij.j
    public final int i() {
        return C();
    }

    @Override // ij.j
    public final int j() {
        return A();
    }

    @Override // ij.j
    public final long k() {
        return B();
    }

    @Override // ij.j
    public final float l() {
        return Float.intBitsToFloat(A());
    }

    @Override // ij.j
    public final int m() {
        return C();
    }

    @Override // ij.j
    public final long n() {
        return D();
    }

    @Override // ij.j
    public final int p() {
        return A();
    }

    @Override // ij.j
    public final long q() {
        return B();
    }

    @Override // ij.j
    public final int r() {
        int C = C();
        return (-(C & 1)) ^ (C >>> 1);
    }

    @Override // ij.j
    public final long s() {
        long D = D();
        return (-(D & 1)) ^ (D >>> 1);
    }

    @Override // ij.j
    public final String t() {
        int C = C();
        if (C > 0) {
            int i5 = this.f10864d;
            int i6 = this.f10866f;
            if (C <= i5 - i6) {
                String str = new String(this.f10863c, i6, C, t.a);
                this.f10866f += C;
                return str;
            }
        }
        if (C == 0) {
            return "";
        }
        if (C < 0) {
            throw v.d();
        }
        throw v.e();
    }

    @Override // ij.j
    public final String u() {
        int C = C();
        if (C > 0) {
            int i5 = this.f10864d;
            int i6 = this.f10866f;
            if (C <= i5 - i6) {
                String l6 = e1.a.l(this.f10863c, i6, C);
                this.f10866f += C;
                return l6;
            }
        }
        if (C == 0) {
            return "";
        }
        if (C <= 0) {
            throw v.d();
        }
        throw v.e();
    }

    @Override // ij.j
    public final int v() {
        if (c()) {
            this.f10868h = 0;
            return 0;
        }
        int C = C();
        this.f10868h = C;
        if ((C >>> 3) != 0) {
            return C;
        }
        throw new v("Protocol message contained an invalid tag (zero).");
    }

    @Override // ij.j
    public final int w() {
        return C();
    }

    @Override // ij.j
    public final long x() {
        return D();
    }

    @Override // ij.j
    public final boolean y(int i5) {
        int i6 = i5 & 7;
        int i10 = 0;
        if (i6 != 0) {
            if (i6 == 1) {
                G(8);
                return true;
            }
            if (i6 == 2) {
                G(C());
                return true;
            }
            if (i6 == 3) {
                z();
                a(((i5 >>> 3) << 3) | 4);
                return true;
            }
            if (i6 == 4) {
                return false;
            }
            if (i6 != 5) {
                throw v.b();
            }
            G(4);
            return true;
        }
        int i11 = this.f10864d - this.f10866f;
        byte[] bArr = this.f10863c;
        if (i11 >= 10) {
            while (i10 < 10) {
                int i12 = this.f10866f;
                this.f10866f = i12 + 1;
                if (bArr[i12] < 0) {
                    i10++;
                }
            }
            throw v.c();
        }
        while (i10 < 10) {
            int i13 = this.f10866f;
            if (i13 == this.f10864d) {
                throw v.e();
            }
            this.f10866f = i13 + 1;
            if (bArr[i13] < 0) {
                i10++;
            }
        }
        throw v.c();
        return true;
    }
}
